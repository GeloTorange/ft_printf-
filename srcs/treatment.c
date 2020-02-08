/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:55:14 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 22:07:53 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int		treatement(t_Options *tab)
{
	tab->i++;
	parse_convert(tab); 		// обработка - + 0 #
	parse_field_width(tab);		// обработка
	parse_precision(tab);		// обработка
	parse_arguments(tab);		// обработка
	parse_specifier(tab);		// обработка
	switch_display(tab);		// вывод
	return (tab->len);
}
