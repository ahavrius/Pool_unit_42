/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozhyhadl <ozhyhadl@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 16:38:14 by ozhyhadl          #+#    #+#             */
/*   Updated: 2018/09/23 23:09:48 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	rush01(int x, int y)
{
	g_x2 = 0;
	g_y2 = 0;
	if (y > 0)
		line(x, '/', '*', '\\');
	while (g_x2 < y - 1)
		line(x, '*', ' ', '*');
	if (y > 1)
		line(x, '\\', '*', '/');
}
