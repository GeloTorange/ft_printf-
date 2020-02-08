/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:54:12 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 19:04:39 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	parser(t_Options *tab)
{
	if (ft_strcmp(tab->f_copy, "%") == 0)
		return (0);
	while (tab->f_copy[tab->i] != '\0')
	{
		if (tab->f_copy[tab->i] == '%')
		{
			reinitialize(tab);
			treatement(tab);
		}
		else
		{
			write(1, &tab->f_copy[tab->i], 1);
			tab->len++;
		}
		tab->i++;
	}
	return (tab->len);
}
