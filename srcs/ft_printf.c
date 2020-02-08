/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:52:37 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 19:47:25 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include "ft_printf.h"

t_Options	*init(t_Options *tab)
{
	tab->len = 0;
	tab->i = 0;
	tab->specifier_mask = "scSCdDiuUoOxXbp%";
	tab->converter_mask = "-+ 0#";
	tab->argument_mask = "lhjz";
	tab->f_treat = (char *)tab->format;
	tab->f_copy = (char *)tab->format;
	return (tab);
}

int			ft_printf(const char *format, ...)
{
	t_Options *tab;

	if (!(tab = (t_Options*)malloc(sizeof(t_Options))))
		return (-1);
	tab->format = format; 	// строка получает весь исходный формат ("%s, %s!\n") для дальней работы
	tab = init(tab);		// задаем базовые значения для структуры
	if (format)
	{
		va_start(tab->args, format);
		tab->len = parser(tab);
		va_end(tab->args);
	}
	free(tab);
	return (tab->len);
}
