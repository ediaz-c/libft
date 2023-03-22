/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:34:05 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/03/21 17:06:56 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(char *str, size_t len)
{
	size_t	size;

	size = len;
	if (ft_strlen(str) < len)
		size = ft_strlen(str);
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*str;

	j = 0;
	i = 0;
	if (!s)
		return (0);
	size = ft_len((char *)s, len);
	str = (char *)malloc (sizeof(*s) * (size + 1));
	if (str == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
