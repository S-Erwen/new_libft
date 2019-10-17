/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putendl_fd.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 19:31:30 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 23:26:16 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void			ft_putendl_fd(char *s, int fd)
{
	int		i;

	if (s)
	{
		i = 0;
		while (s[i])
			ft_putchar_fd(s[i++], fd);
		ft_putchar_fd('\n', fd);
	}
}
