/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 21:32:19 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 03:01:52 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start > len)
	{
		if (!(str = (char *)malloc(sizeof(char) * 2)))
			return (NULL);
		str[0] = s[i];
		str[1] = '\0';
		return (str);
	}
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (i < len)
		return (NULL);
	i = 0;
	while (s[start] && len > i)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
