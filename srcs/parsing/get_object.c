/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_object.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelanoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 18:45:22 by hdelanoe          #+#    #+#             */
/*   Updated: 2018/02/16 18:45:23 by hdelanoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	get_complex(t_env *e, t_json *json)
{
	if (!(ft_strcmp(json->name, "quad")))
		create_quad(e, json);
	else if (!(ft_strcmp(json->name, "torus")))
		create_torus(e, json);
	else if (!(ft_strcmp(json->name, "glass")))
		create_glass(e, json);
	else if (!(ft_strcmp(json->name, "cube")))
		create_cube(e, json);
	else if (!(ft_strcmp(json->name, "area_light")))
		create_area_light(e, json);
	else if (!(ft_strcmp(json->name, "pyramide")))
		create_pyramide(e, json);
}

void	get_object(t_env *e, t_json *json)
{
	t_json	*tmp;

	while (json->member)
	{
		tmp = json->member;
		if (!(ft_strcmp(tmp->name, "sphere")) && tmp->member)
			create_sphere(e, tmp);
		else if (!(ft_strcmp(tmp->name, "plane")) && tmp->member)
			create_plane(e, tmp);
		else if (!(ft_strcmp(tmp->name, "triangle")) && tmp->member)
			create_triangle(e, tmp);
		else if (!(ft_strcmp(tmp->name, "cylinder")) && tmp->member)
			create_cylinder(e, tmp);
		else if (!(ft_strcmp(tmp->name, "cone")) && tmp->member)
			create_cone(e, tmp);
		else if (!(ft_strcmp(tmp->name, "light")) && tmp->member)
			create_light(e, tmp);
		else if (!(ft_strcmp(tmp->name, "disk")) && tmp->member)
			create_disk(e, tmp);
		else if (tmp->member)
			get_complex(e, tmp);
		else if (tmp)
			parse_scene(e, tmp);
		json->member = json->member->next;
		free_json_member(&tmp);
	}
}