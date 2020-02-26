/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 13:11:01 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/26 16:43:44 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

char *ft_strdup(char *src);
int ft_strlen(char *str);
struct s_stock_str *ft_strs_to_tab(int ac, char**av);
void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putnbr(int nb);
void ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return(0);
}
