/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozcan <bozcan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:32:26 by bozcan            #+#    #+#             */
/*   Updated: 2021/10/13 11:39:27 by bozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
				return (0);
			i++;
		}
	}
	return (1);
}
