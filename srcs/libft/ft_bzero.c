/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:39:35 by rmaple            #+#    #+#             */
/*   Updated: 2019/12/17 18:20:50 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_bzero(void *s, size_t n)
{
	unsigned char	*p_s;

	p_s = (unsigned char *)s;
	while (n--)
		*p_s++ = '\0';
	return (s);
}
