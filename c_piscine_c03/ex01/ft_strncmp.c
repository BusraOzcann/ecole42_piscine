/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozcan <bozcan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:34:22 by bozcan            #+#    #+#             */
/*   Updated: 2021/10/11 10:34:25 by bozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
