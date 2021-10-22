/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozcan <bozcan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:55:43 by bozcan            #+#    #+#             */
/*   Updated: 2021/10/11 14:18:10 by bozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l1;
	int	l2;

	l1 = ft_strlen(dest);
	l2 = ft_strlen(src);
	i = 0;
	while (i < l2)
	{
		dest[l1 + i] = src[i];
		i++;
	}
	dest[l1 + i] = '\0';
	return (dest);
}
