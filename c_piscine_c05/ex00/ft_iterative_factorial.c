int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb >= 1)
	{
		while (nb > 1)
		{
			result = result * nb;
			nb -= 1;
		}
	}
	else if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (result);
}
