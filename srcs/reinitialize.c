/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinitialize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:58:20 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 18:48:25 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_Options	*reinitialize(t_Options *tab)
{
	tab->specifier_flag = '\0';
	tab->convert[0] = '\0';
	tab->convert[1] = '\0';
	tab->convert[2] = '\0';
	tab->convert[3] = '\0';
	tab->convert[4] = '\0';
	tab->convert[5] = '\0';
	tab->argument_flag[0] = '\0';
	tab->argument_flag[1] = '\0';
	tab->precision = -1;
	tab->field_width = 0;
	return (tab);
}
