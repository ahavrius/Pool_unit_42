/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:22:49 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/12 12:10:40 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	shift(char *str)
{
	int i;

	i = 0;
	while (*(str + i) == ' ' || str[i] == '\n' || str[i] == '\t' ||
		str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int a;
	int i;
	int sign;

	a = 0;
	i = shift(str);
	sign = 1;
	if (*(str + i) == '-')
	{
		sign *= -1;
		i++;
	}
	else if (*(str + i) == '+')
	{
		i++;
	}
	while ((*(str + i) >= '0') && (*(str + i) <= '9'))
	{
		a = a * 10 + *(str + i) - '0';
		i++;
	}
	a *= sign;
	return (a);
}
