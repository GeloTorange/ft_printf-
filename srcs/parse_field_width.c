/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_field_width.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:45:09 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 18:47:30 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_Options	*parse_field_width(t_Options *tab)
{
	while (tab->f_treat[tab->i] >= '0' && tab->f_treat[tab->i] <= '9')
	{
		tab->field_width *= 10;
		tab->field_width += (tab->f_treat[tab->i] - 48);
		tab->i++;
	}
	return (tab);
}
