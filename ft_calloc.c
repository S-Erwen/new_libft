/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 21:19:02 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 13:19:07 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void			*ft_calloc(size_t nmemb, size_t size)
{
	void		*dest;
	char		*s;
	size_t		i;

	if (!size || !nmemb)
		return (NULL);
	if (!(s = (char *)malloc(size * nmemb)))
		return (NULL);
	i = 0;
	while (i < nmemb * size)
		s[i++] = 0;
	dest = s;
	return (dest);
}
