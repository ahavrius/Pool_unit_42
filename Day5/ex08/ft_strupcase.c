/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:27:25 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/10 18:10:28 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += 'A' - 'a';
		i++;
	}
	return (str);
}
