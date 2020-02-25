/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:17:24 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/25 19:29:16 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_all_strlen(int size, char **strs, char *sep)
{
	int lengh;
	int i;

	i = 0;
	lengh = 0;
	while (i < size)
	{
		lengh = lengh + ft_strlen(strs[i]);
		i++;
	}
	lengh = lengh + (size - 1) * ft_strlen(sep);
	return (lengh);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	i = 0;
	if (size == 0)
		return (0);
	if (!(str = malloc(sizeof(char) * (ft_all_strlen(size, strs, sep) + 1))))
		return (NULL);
	i = 0;
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < (size - 1))
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argc - 1, argv, "   coucoucou   "));
/*	char *strs[] =
	{
		"hello",
		"ca va",
		"oui",
		"OOOOK"
	};

	int i=0;
	int size = 5;

	char *sep ="  coucoucou   ";
	char *tab = ft_strjoin(size, strs, sep);
	printf("%s", tab);
	return(0);
*/
}

