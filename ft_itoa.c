/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 18:28:44 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 23:22:33 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		lenerint(int n)
{
	long long	len;

	len = 0;
	if (n >= 0 && n <= 9)
		return (1);
	else if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char		*str;
	long int	tp;
	int			len;

	tp = n;
	len = lenerint(tp);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (tp < 0)
	{
		str[0] = '-';
		tp = -tp;
	}
	while (len-- && str[len] != '-')
	{
		str[len] = tp % 10 + '0';
		tp /= 10;
	}
	return (str);
}
