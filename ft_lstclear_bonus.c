/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/17 05:34:26 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 05:45:41 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstclear(t_list **lst, void (*del)(void *))
{
	while (*lst)
	{
		del((*lst)->content);
		free(*lst);
		*lst = (*lst)->next;
	}
}
