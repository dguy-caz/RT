/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_light.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelanoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:01:18 by hdelanoe          #+#    #+#             */
/*   Updated: 2017/11/28 12:01:20 by hdelanoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void		add_new_light(t_light **list, t_light *new_light)
{
	t_light	*tmp;

	if (!(*list)->color.r)
	{
		free((*list));
		(*list) = new_light;
		return ;
	}
	tmp = (*list);
	while ((*list)->next)
		(*list) = (*list)->next;
	(*list)->next = new_light;
	(*list) = tmp;

}

void debug_light(t_light *tmp)
{
	printf("LIGHT:\n");
	printf("origin : x->%f\n", tmp->origin.x);
	printf("         y->%f\n", tmp->origin.y);
	printf("         z->%f\n", tmp->origin.z);
	printf("colors : r->%f\n", tmp->color.r);
	printf("         g->%f\n", tmp->color.g);
	printf("         b->%f\n", tmp->color.b);
}

void			create_light(t_env *e, t_json *json, int *id)
{
	t_light	*light;
	t_json 	*tmp;

	if(!(light = ft_memalloc(sizeof(t_light))))
		exit_rt(1);
	light->id = *id;
	*id += 1;
	while (json->member)
	{
		tmp = json->member;
		if (!(ft_strcmp(tmp->name, "coord")) && tmp->member)
			light->origin = parse_point(tmp->member);
		else if (!(ft_strcmp(tmp->name, "color")) && tmp->member)
			light->color = parse_color(tmp->member);
		else
			ft_printf("light %d as a bad attribut\n", light->id);
		json->member = json->member->next;
		free(tmp->name);
		free(tmp->content);
		free(tmp);
	}
	debug_light(light);
	add_new_light(&e->light, light);
}