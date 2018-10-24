/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:39:24 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/17 15:51:23 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			res++;
		i++;
	}
	return (res);
}
