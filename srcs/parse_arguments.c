/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:44:48 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 18:46:55 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_Options		*parse_arguments(t_Options *tab)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (tab->argument_mask[i] != '\0')
	{
		while (tab->argument_mask[i] == tab->f_treat[tab->i])
		{
			tab->argument_flag[j] = tab->f_treat[tab->i];
			tab->argument_flag[j + 1] = '\0';
			tab->i++;
			j++;
		}
		i++;
	}
	return (tab);
}
