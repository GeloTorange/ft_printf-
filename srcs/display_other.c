/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_other.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 16:01:33 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 18:43:22 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static t_Options	*display_percent(t_Options *tab)
{
	if (tab->convert[3] == '0' && tab->precision <= 0 && !tab->convert[0])
	{
		tab->precision = tab->field_width;
		tab->field_width = 0;
	}
	if (tab->convert[0] != '-')
		display_gap(tab, ' ', tab->field_width - 1, 1);
	if (tab->convert[3] == '0')
		display_gap(tab, '0', tab->precision - 1, 1);
	write(1, "%", 1);
	if (tab->convert[0] == '-')
		display_gap(tab, ' ', tab->field_width - 1, 1);
	tab->len++;
	return (tab);
}

t_Options			*display_other(t_Options *tab)
{
	if (tab->f_treat[tab->i] == '%')
	{
		display_percent(tab);
		return (tab);
	}
	if (tab->convert[3] == '0' && tab->precision <= 0 && !tab->convert[0])
	{
		tab->precision = tab->field_width;
		tab->field_width = 0;
	}
	if (tab->convert[0] != '-')
		display_gap(tab, ' ', tab->field_width - 1, 1);
	if (tab->convert[3] == '0')
		display_gap(tab, '0', tab->precision - 1, 1);
	write(1, &tab->f_copy[tab->i], 1);
	if (tab->convert[0] == '-')
		display_gap(tab, ' ', tab->field_width - 1, 1);
	tab->len++;
	return (tab);
}
