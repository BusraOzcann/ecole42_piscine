/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozcan <bozcan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:54:27 by bozcan            #+#    #+#             */
/*   Updated: 2021/10/06 09:41:12 by bozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_checknbr(int n)
{
	if ((n < -2000000000) || (n > 2000000000))
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		ft_putchar('0' + 2);
		n -= 2000000000;
	}
}

void	ft_putnbr(int n)
{
	int	digit;
	int	reverse;

	reverse = 0;
	if (n > -2147483647 && n < 2147483647)
	{
		ft_checknbr(n);
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		while (n != 0)
		{
			digit = n % 10;
			reverse = reverse * 10 + digit;
			n /= 10;
		}
		while (reverse > 0)
		{
			ft_putchar('0' + (reverse % 10));
			reverse = (reverse - (reverse % 10)) / 10;
		}
	}
}
