/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_obj.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelanoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 22:15:21 by hdelanoe          #+#    #+#             */
/*   Updated: 2018/02/26 22:15:23 by hdelanoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void		read_obj(t_env *e, t_parsing *p, char *text)
{
	if ((p->fd = open(text, O_RDONLY)) < 0)
		ft_kill("This file doesn't exist or bad typography.");
	while (get_next_line(p->fd, &p->buff) == 1)
	{
		if (p->i >= 1024 || p->j >= 1024)
		{
			free(e->argv_cpy);
			ft_printf("Sorry, %s is too big!\n", text);
			return ;
		}
		if (p->buff[0] == 'v' && p->buff[1] == ' ')
		{
			p->v[p->i] = ft_strsplit(p->buff, ' ');
			p->i++;
		}
		if (p->buff[0] == 'f')
		{
			printf("%s\n", p->buff);
			p->f[p->j] = ft_strsplit(p->buff, ' ');
			p->j++;
		}
	}
	close(p->fd);
}

void		check_line(char *text, t_env *e)
{
	t_parsing	p;

	p.i = 0;
	p.j = 0;
	ft_bzero(p.f, sizeof(char***) * 1024);
	ft_bzero(p.v, sizeof(char***) * 1024);
	ft_printf("Chargement de l'objet'...\n");
	read_obj(e, &p, text);
	parsing_obj(e, p.v, p.f);
	ft_bzero(e->mlx.data, (e->width * e->height) * 4);
	ft_pthread(e, ray_tracer_void);
	ft_printf("Scene chargée.\n");
	free(e->argv_cpy);
}

void		read_obj_files(t_env *e)
{
	DIR				*p;
	struct dirent	*pp;
	char			*tmp;

	p = opendir("./object/");
	ft_printf("\nListe des obj :\n\n");
	if (p != NULL)
	{
		while ((pp = readdir(p)) != NULL)
			ft_printf("%s\n", pp->d_name);
	}
	ft_printf("\nEntrez un objet a charger :\n");
	if (get_next_line(fileno(stdin), &e->argv_cpy) == 1)
	{
		tmp = ft_strdup("./object/");
		e->argv_cpy = ft_strjoin_fre(&tmp, &e->argv_cpy, 1, 1);
		check_line(e->argv_cpy, e);
	}
	else
		ft_printf("Error input obj");
	closedir(p);
	if (e->copy)
		e->copy = NULL;
}
