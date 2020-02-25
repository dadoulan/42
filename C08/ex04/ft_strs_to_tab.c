/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 09:01:39 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/25 13:38:08 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int			i;
	char		*dup;

	i = 0;
	if (!(dup = malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str *t_av;

	i = 0;
	if(!(t_av = malloc(sizeof(t_av) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		t_av[i]->size = ft_strlen(av[i]);
		t_av[i]->str = av[i];
		t_av[i]->copy = ft_strdup(av[i]);
		i++;
	}
	t_av[i]->size = 0;
	t_av[i]->str = 0;
	t_av[i]->copy = 0;
	return (t_av);
}
