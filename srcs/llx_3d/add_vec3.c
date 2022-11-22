/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vec3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurieux <ldurieux@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:51:57 by ldurieux          #+#    #+#             */
/*   Updated: 2022/11/20 22:52:03 by ldurieux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "llx_3d.h"

void	llx_add_vec3(t_vec3 *i, t_vec3 *o)
{
	o->x += i->x;
	o->y += i->y;
	o->z += i->z;
}