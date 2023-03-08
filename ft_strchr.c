/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:38:48 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/03/08 20:57:29 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s)
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	if ((char)c == '\0')
		return (s);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%s\n", ft_strchr("teste", 1024));
	printf("%s\n", strchr("teste", 1024));
}
*/
