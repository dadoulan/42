/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 09:27:25 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/20 14:11:11 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

void	ft_swap(char *s1, char *s2)
{
	char *tmp;

	tmp = s1;
	s1 = s2;
	s2 = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] != '\0' && s2[i] == '\0')
		|| (s1[i] == '\0' && s2[i] != '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_sort_params(int argc, char **argv)
{
	int		cmp;
	int		i;
	char	*tmp;

	cmp = 1;
	while (cmp > 0)
	{
		cmp = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				cmp++;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
}

int		main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}
