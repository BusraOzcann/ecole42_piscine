int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power >= 1)
	{
		while (power >= 1)
		{
			result *= nb;
			power--;
		}
	}
	else if (power == 0 && nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (result);
}
