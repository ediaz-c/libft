/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:40 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/03/08 19:39:02 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*find;
	size_t	i;
	size_t	j;

	str = (char *)haystack;
	find = (char *)needle;
	i = 0;
	if (*find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (find[j] != '\0' && find[j] == str[i + j]
			&& i + j < len)
			j++;
		if (find[j] == '\0')
			return (&str[i]);
		i++;
		j = 0;
	}
	return (0);
}
