/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 20:00:27 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 22:03:23 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		y;
	size_t		x;

	i = 0;
	y = 0;
	x = 0;
	while (s2[x])
		x++;
	if (x == 0)
		return ((char *)s1);
	while (s1[i] && (i < n))
	{
		while ((s1[i + y] == s2[y]) && (i + y < n))
		{
			if (y == x - 1)
				return ((char *)s1 + i);
			y++;
		}
		y = 0;
		i++;
	}
	return (NULL);
}
