/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 03:25:05 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 18:44:21 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_Options			*display_s(t_Options *tab)
{
	char		*s;
	int			i;
	int			len;

	i = 0;
	s = va_arg(tab->args, char *);
	if (tab->precision > -1 && s)
		s = ft_strndup(s, tab->precision);
	else if (tab->precision == -1 && s)
		s = ft_strdup(s);
	else if (tab->precision > -1 && !s)
		s = ft_strndup("(null)", tab->precision);
	else if (tab->precision == -1 && !s)
		s = ft_strdup("(null)");
	len = ft_strlen(s);
	tab->len += len;
	if (tab->convert[3] == '0' && tab->convert[0] != '-')
		display_gap(tab, '0', tab->field_width - len, 1);
	else if (tab->convert[0] != '-')
		display_gap(tab, ' ', tab->field_width - len, 1);
	ft_putstr(s);
	if (tab->convert[0] == '-')
		display_gap(tab, ' ', tab->field_width - len, 1);
	free(s);
	return (tab);
}
