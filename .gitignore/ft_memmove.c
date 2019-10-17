/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:44:57 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 02:50:47 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*m;
	size_t			i;

	i = 0;
	d = (char *)dest;
	m = (char *)src;
	if (!d && !m)
		return (NULL);
	if (d < m)
		while (i < n)
		{
			d[i] = m[i];
			i++;
		}
	else
		while (n)
		{
			d[n - 1] = m[n - 1];
			n--;
		}
	return (dest);
}
