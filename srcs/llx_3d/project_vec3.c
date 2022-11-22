/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   project_vec3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurieux <ldurieux@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:29:53 by ldurieux          #+#    #+#             */
/*   Updated: 2022/11/22 16:29:54 by ldurieux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "llx_3d.h"

void	llx_project_vec3(t_vec3 *vec, t_vec3 *trans, t_mat4x4 *rot,
					t_mat4x4 *proj)
{
	llx_mul_vec3_mat4x4(rot, vec);
	llx_add_vec3(trans, vec);
	llx_mul_vec3_mat4x4(proj, vec);
}
