/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozcan <bozcan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:53:08 by bozcan            #+#    #+#             */
/*   Updated: 2021/10/07 16:35:54 by bozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int main()
{
    int a = 6780;
    int *ap;
    ap = &a;
    
    int **p;
    p = &ap;
    
    int ***h;
    h = &p;
    
    int ****c;
    c = &h;
    
    
    printf("p nın degeri: %d\n", **p);
    printf("h ın degeri: %d\n", ***h);
    printf("c ın degeri: %d\n", ****c);
    return 0;
}
