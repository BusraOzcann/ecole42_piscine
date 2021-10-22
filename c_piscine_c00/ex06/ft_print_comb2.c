/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozcan < bozcan@student.42kocaeli.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:11:55 by bozcan            #+#    #+#             */
/*   Updated: 2021/10/05 10:53:58 by bozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	g_booli;
int	g_boolj;

void	ft_putchar_i(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	if (a == '9' && b == '8')
		g_booli = 1;
}

void	ft_putchar_j(char a, char b)
{
	if (a == '9' && b == '9')
		g_boolj = 1;
	if (g_booli == 1 && g_boolj == 1)
	{
		write(1, &a, 1);
		write(1, &b, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_check(int i, int j)
{
	int	number;

	if (i < 10)
		ft_putchar_i('0', '0' + i);
	else
	{
		number = i % 10;
		ft_putchar_i('0' + ((i - number) / 10), '0' + number);
	}
	if (j < 10)
		ft_putchar_j('0', '0' + j);
	else
	{
		number = j % 10;
		ft_putchar_j('0' + ((j - number) / 10), '0' + number);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	g_booli = 0;
	g_boolj = 0;
	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_check(i, j);
			j++;
		}
		i++;
	}
}
