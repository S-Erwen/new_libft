/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsize_bonus.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 01:49:07 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 13:36:13 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	if (lst == NULL && i == 0)
		i++;
	return (i);
}
