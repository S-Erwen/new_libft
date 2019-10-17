/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:14:28 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 16:06:43 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dust;
	unsigned char		*mirage;
	size_t				i;

	if (!src && !dest)
		return (NULL);
	i = 0;
	dust = dest;
	mirage = (unsigned char *)src;
	while (n > i)
	{
		dust[i] = mirage[i];
		i++;
	}
	dest = dust;
	return (dest);
}
