/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozcan <bozcan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:59:34 by bozcan            #+#    #+#             */
/*   Updated: 2021/10/13 15:59:39 by bozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(unsigned char a)
{
	char	*asd;

	asd = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(asd[a / 16]);
	ft_putchar(asd[a % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < ' ' || str[i] > '~'))
			ft_putchar(str[i]);
		else
			hex(str[i]);
		i++;
	}
}

int main(void)
{
    char *str = "asdasdsad\nasd\fsdf";
    ft_putstr_non_printable(str);
    printf("\n%s",str);
}
