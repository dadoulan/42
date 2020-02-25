/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 08:15:18 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/21 15:53:40 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(int argc, char **argv)
{
	int j;

	j = 0;
	(void)&argc;
	while (argv[0][j])
		write(1, &argv[0][j++], 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	ft_print_program_name(argc, argv);
	return (0);
}
