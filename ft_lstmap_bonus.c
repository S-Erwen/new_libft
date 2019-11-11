#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*dock;

	if (!f || !del)
		return (NULL);
	dock = NULL;
	while (lst)
	{
		if (!(dock = ft_lstnew((*f)(lst->content))))
		{
			while (dock)
			{
				del((dock)->content);
				free(dock);
				dock = (dock)->next;
			}
			return (NULL);
		}
		if (elem)
		{
			if (!dock)
				dock = elem;
			else
				ft_lstlast(dock)->next = elem;
		}
		lst = lst->next;
	}
	return (dock);
}
