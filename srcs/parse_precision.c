/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:45:26 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 18:47:51 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_Options	*parse_precision(t_Options *tab)
{
	while (tab->f_treat[tab->i] == '.')
	{
		tab->i++;
		tab->precision = 0;
	}
	while (tab->f_treat[tab->i] >= '0' && tab->f_treat[tab->i] <= '9')
	{
		tab->precision *= 10;
		tab->precision += (tab->f_treat[tab->i] - 48);
		tab->i++;
	}
	return (tab);
}
