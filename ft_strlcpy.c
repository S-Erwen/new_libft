/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 17:43:06 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 21:50:31 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		y;
	size_t		dst;

	i = 0;
	y = 0;
	if (!src)
		return (0);
	dst = ft_strlen(dest);
	while (src[y])
		y++;
	if (!(n > 0))
		return (y);
	while ((n - 1) > i && src[i])
	{
		dest[i] = src[i];
		i++;
		dst--;
	}
	dest[i] = '\0';
	if (!dst)
		return (0);
	return (y);
}
