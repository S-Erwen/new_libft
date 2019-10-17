/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 21:30:29 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 21:52:34 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		u;
	char	*dupage;

	u = 0;
	i = 0;
	while (s[i])
		i++;
	if (!(dupage = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i])
		dupage[u++] = s[i++];
	dupage[u] = '\0';
	return (dupage);
}
