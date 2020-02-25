/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:51:40 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/18 13:40:54 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int res;
	int cmp;
	int i;

	i = 0;
	res = 0;
	cmp = 0;
	while (str[i])
	{
		while (str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
		while ('+' <= str[i] && str[i] <= '-')
		{
			if (str[i++] == '-')
				cmp++;
		}
		while ('0' <= str[i] && str[i] <= '9')
			res = res * 10 + (str[i++] - '0');
		if (cmp % 2 == 1)
			res = res * (-1);
		return (res);
	}
	return (0);
}
