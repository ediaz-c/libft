/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:08:24 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/03/16 17:38:07 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*reg;

	if (nitems > ULONG_MAX / size)
		return (0);
	reg = malloc (nitems * size);
	if (!(reg == NULL))
		ft_bzero(reg, size * nitems);
	return (reg);
}
