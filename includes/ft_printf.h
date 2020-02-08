/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:46:06 by dhojt             #+#    #+#             */
/*   Updated: 2020/01/13 19:54:06 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../srcs/libft/libft.h"
#include <unistd.h>
# include <stdarg.h>
# include <ctype.h>

/*
** format: string (first ft_printf parameter).
** f_copy: copy of format.
** f_treat: copy of format.
** args: stores caradic arguments.
** len: ft_printf return value (number of printed characters).
** i: position of read in format string.
** masks contain strings of chars for the respective flags, used for matching.
*/

typedef struct	s_Options
{
	const char	*format; 			// исходная строка с флагами
	char		*f_copy; 			// буфер
	char		*f_treat;			//
	va_list		args;				// аргументы (для печати)
	int			len;				// длинна
	size_t		i;					//
	long int	precision;			// точность (для дробных типов)
	long int	field_width;		//
	char		specifier_flag;		// нужный флаг взятый из format
	char		convert[6];			// буфер
	char		argument_flag[2];	// флаг после парсинга
	char		*specifier_mask;	// основные флаги
	char		*converter_mask;	// флаги - + 0 #
	char		*argument_mask;		// флаги l ll h hh j z
}				t_Options;

int				ft_printf(const char *format, ...);
int				treatement(t_Options *tab);
int				parser(t_Options *tab);

t_Options			*initialize(t_Options *tab);
t_Options			*reinitialize(t_Options *tab);

t_Options			*parse_convert(t_Options *tab);
t_Options			*parse_field_width(t_Options *tab);
t_Options			*parse_precision(t_Options *tab);
t_Options			*parse_arguments(t_Options *tab);
t_Options			*parse_specifier(t_Options *tab);
t_Options			*switch_display(t_Options *tab);

t_Options			*display_d(t_Options *tab);
t_Options			*display_s(t_Options *tab);
t_Options			*display_c(t_Options *tab);
t_Options			*display_u(t_Options *tab);
t_Options			*display_x(t_Options *tab);
t_Options			*display_o(t_Options *tab);
t_Options			*display_p(t_Options *tab);
t_Options			*display_ws(t_Options *tab);
t_Options			*display_other(t_Options *tab);
void			display_wchar(wint_t c, t_Options *tab);
void			display_gap(t_Options *tab, char c, int len, int update_len);

#endif
