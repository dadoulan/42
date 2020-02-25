/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 08:50:51 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/20 08:51:43 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	j = 0;
	while (0 < i)
	{
		while (argv[i][j])
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
		i--;
		j = 0;
	}
}

int		main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
