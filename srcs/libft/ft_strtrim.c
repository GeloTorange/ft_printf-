/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <rmaple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:36:09 by rmaple            #+#    #+#             */
/*   Updated: 2019/09/23 22:24:35 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (s == NULL)
		return (NULL);
	start = 0;
	while (s[start] && ISWHITESPACE(s[start]))
		++start;
	if (!s[start])
		len = 0;
	else
	{
		end = ft_strlen(s) - 1;
		while (ISWHITESPACE(s[end]))
			--end;
		len = end - start + 1;
	}
	return (ft_strsub(s, start, len));
}
