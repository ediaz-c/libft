/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:17:38 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/03/08 20:57:32 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
		str++;
	if ((char)c == '\0')
		return (str);
	while (str >= s)
	{
		if (*str == (char)c)
			return (str);
		str--;
	}
	return (0);
}
/*
int	main(void)
{
	char text[] = "hola qhue tal";
	char c = 'h';
	printf("%s", ft_strrchr(text, c));
}
*/
