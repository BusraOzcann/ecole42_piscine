char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if ((str[j] >= 'A' && str[i] <= 'Z')
			|| (str[j] >= 'a' && str[i] <= 'z'))
		{
			if (str[j] >= 'a' && str[j] <= 'z' && i == 0)
				str[j] -= 32;
			else if (str[j] >= 'A' && str[j] <= 'Z' && i > 0)
				str[j] += 32;
			i++;
		}
		else
			i = 0;
		j++;
	}
	return (str);
}
