#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int multiple;

	multiple = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		multiple *= nb;
		power --;
	}
	return (multiple);
}
// int main()
// {
// int nb = 2;
// int power = 3;

// printf("%d up is %d\n", nb, power, ft_iterative_power(nb, power));
// return 0;
// }
