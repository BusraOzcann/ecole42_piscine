#include<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	number;

	i = 0;
	result = 0;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			result++;
		i++;
	}
	if (result % 2 == 1)
		result = -1;
	else
		result = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (str[i] - '0') + (number * 10);
		i++;
	}
	return (number * result);
}
