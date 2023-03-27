/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:34:05 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/03/24 16:49:31 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	ft_len(char *str, unsigned int start, size_t len)
{
	unsigned char	size;

	size = len - start;
	if (ft_strlen(str) <= len)
		size = ft_strlen(str) - start;
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
	size = ft_len((char *)s, start, len);
	str = (char *)malloc (sizeof(*s) * (size + 1));
	if (str == NULL)
		return (0);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
