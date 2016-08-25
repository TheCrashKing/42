/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 07:49:50 by acarre            #+#    #+#             */
/*   Updated: 2016/08/23 04:01:59 by acarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*g;
	char	*h;

	g = dest;
	h = (char *)src;
	while (*g != '\0')
	{
		g++;
	}
	while (*h != '\0')
	{
		*g = *h;
		g++;
		h++;
	}
	*g = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*truc;
	int		g;
	int		h;
	int		counter;

	counter = 0;
	while (counter < argc)
	{
		h = 0;
		while (argv[h])
		{
			counter++;
			h++;
		}
	}
	truc = (char*)malloc(sizeof(*truc) * (counter + 1));
	g = 0;
	while (g < argc - 1)
	{
		truc = ft_strcat(truc, argv[g + 1]);
		g++;
	}
	return (truc);
}
