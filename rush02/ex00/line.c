/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 18:55:51 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/23 23:10:21 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	line(int a, char c1, char c2, char c3)
{
	if (a > 0)
	{
		g_arr2[g_x2][g_y2] = c1;
		g_y2++;
	}
	while (g_y2 < a - 1)
	{
		g_arr2[g_x2][g_y2] = c2;
		g_y2++;
	}
	if (a > 1)
		g_arr2[g_x2][g_y2] = c3;
	g_y2 = 0;
	g_x2++;
}
