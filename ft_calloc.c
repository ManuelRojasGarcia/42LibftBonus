/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:23:01 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/12 15:23:31 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*resultado;

	resultado = malloc(count * size);
	if (resultado == NULL)
		return (0);
	else
	{
		ft_bzero(resultado, (count * size));
		return (resultado);
	}
}
/*
int main(void)
{
	size_t	n;
	size_t	s;
	void	*resultado;

	n = '4';
	s = '7';

	resultado = ft_calloc(n, s);
	printf("%p\n", resultado);
	printf("%p\n", calloc(n, s));
	return (0);
}
*/
