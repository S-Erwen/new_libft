/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 18:06:29 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 01:02:19 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sstrlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	dsr;
	size_t	s;

	y = 0;
	dsr = ft_sstrlen(dest);
	s = ft_sstrlen(src);
	if (dsr >= size)
		return (s + size);
	i = dsr;
	while (src[y] && (size - 1 > i))
		dest[i++] = src[y++];
	if (size > 0)
		dest[i] = '\0';
	return (dsr + s);
}
