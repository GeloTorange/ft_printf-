/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:43:08 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 18:38:57 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_Options	*initialize(t_Options *tab)
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
