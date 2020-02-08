/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:45:37 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 18:48:02 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_Options	*parse_specifier(t_Options *tab)
{
	size_t	i;

	i = 0;
	while (tab->specifier_mask[i] != '\0')
	{
		if (tab->specifier_mask[i] == tab->f_treat[tab->i])
			tab->specifier_flag = tab->specifier_mask[i];
		i++;
	}
	return (tab);
}
