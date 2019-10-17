/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:26:42 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:08:33 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dust;
	unsigned char		*mirage;
	size_t				i;

	i = 0;
	dust = (unsigned char *)dest;
	mirage = (unsigned char *)src;
	while (i < n && mirage[i])
	{
		dust[i] = mirage[i];
		if (mirage[i] == ((unsigned char)c))
			return (dust + i + 1);
		i++;
	}
	return (NULL);
}
