/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:44:59 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 18:47:18 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_Options		*parse_convert(t_Options *tab)
{
	size_t	i;

	i = 0;
	while (tab->converter_mask[i] != '\0')
	{
		while (tab->converter_mask[i] == tab->f_treat[tab->i])
		{
			while (tab->f_treat[tab->i] == '-' && tab->i++)
				tab->convert[0] = '-';
			while (tab->f_treat[tab->i] == '+' && tab->i++)
				tab->convert[1] = '+';
			while (tab->f_treat[tab->i] == ' ' && tab->i++)
				tab->convert[2] = ' ';
			while (tab->f_treat[tab->i] == '0' && tab->i++)
				tab->convert[3] = '0';
			while (tab->f_treat[tab->i] == '#' && tab->i++)
				tab->convert[4] = '#';
			i = 0;
		}
		i++;
	}
	return (tab);
}
