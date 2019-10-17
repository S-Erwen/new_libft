/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <esidelar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 23:16:28 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 03:07:41 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	strs_char_len(char const *s, char c)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			return (len);
		len++;
		i++;
	}
	return (len);
}

static size_t	u_detect(char const *s, char c, int u)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] == c)
		{
			if (s[i] == c && s[i + 1] != c)
				u--;
			i++;
		}
		while (u == 0 && s[i])
		{
			len++;
			i++;
			if (s[i] == c)
				return (len);
		}
		i++;
	}
	return (len);
}

char			**mal_char(int len, const char *s, int c, int error)
{
	char		**strs;

	if (!s || !c)
		return (NULL);
	len = strs_char_len(s, c);
	if (error)
	{
		if (!(strs = (char **)malloc(sizeof(char *) * 2)))
			return (NULL);
		strs[0] = ft_strdup(s);
		strs[1] = NULL;
	}
	else
	{
		if (!(strs = (char **)malloc(sizeof(char *) * (len + 1))))
			return (NULL);
	}
	return (strs);
}

char			**ft_spt_part_two(char c, char **strs, int i, const char *s)
{
	size_t		y;
	size_t		u;
	size_t		len;

	len = strs_char_len(s, c);
	u = 0;
	y = 0;
	while (len > 0)
	{
		if (s[i] == c && s[i])
		{
			strs[u][y] = '\0';
			u++;
			y = 0;
			if (!(strs[u] = malloc(sizeof(char) * (u_detect(s, c, u) + 1))))
				return (0);
			while (s[i] == c && s[i])
				i++;
		}
		strs[u][y++] = s[i++];
		len--;
	}
	strs[u][y] = '\0';
	strs[++u] = NULL;
	return (strs);
}

char			**ft_split(char const *s, char c)
{
	size_t		len;
	size_t		i;
	size_t		y;
	size_t		u;
	char		**strs;

	i = 0;
	if (!s || !c)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	if (!s[i] || !c)
		return (NULL);
	len = strs_char_len(s, c);
	if (len == 0 || s[i] == '\0')
		return (strs = mal_char(len, s, c, 1));
	if (!(strs = mal_char(len, s, c, 0)))
		return (NULL);
	y = 0;
	u = 0;
	if (!(strs[u] = (char *)malloc(sizeof(char) * (u_detect(s, c, 0) + 1))))
		return (0);
	strs = ft_spt_part_two(c, strs, i, s);
	return (strs);
}

#include <string.h>
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	char	**tabstr;
	int		i;
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	i = 0;
	if ((arg = atoi(argv[1])) == 1)
	{
		if (!(tabstr = ft_split("          ", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != '\0')
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 2)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != '\0')
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 3)
	{
		if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != '\0')
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 4)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != '\0')
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 5)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != '\0')
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 6)
	{
		if (!(tabstr = ft_split("", 'z')))
			ft_print_result("NULL");
		else
			if (!tabstr[0])
				ft_print_result("ok\n");
	}
	return (0);
}
