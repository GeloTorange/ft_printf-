/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 02:46:02 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 18:19:46 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <ctype.h>

t_Options			*display_c(t_Options *tab)
{
	wint_t		c;

	if (ft_strcmp(tab->argument_flag, "l") == 0)
		c = (unsigned long)va_arg(tab->args, unsigned long);
	else if (tab->specifier_flag == 'C')
		c = (wchar_t)va_arg(tab->args, wint_t);
	else
		c = (char)va_arg(tab->args, int);
	c = (wint_t)c;
	if (tab->convert[3] == '0' && tab->convert[0] != '-')
		display_gap(tab, '0', tab->field_width - 1, 1);
	else if (tab->convert[0] != '-')
		display_gap(tab, ' ', tab->field_width - 1, 1);
	display_wchar(c, tab);
	if (tab->convert[0] == '-')
		display_gap(tab, ' ', tab->field_width - 1, 1);
	return (tab);
}
