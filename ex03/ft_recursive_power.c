#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	int	multiple;

	multiple = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
// int main()
// {
// 	int nb = 2;
//  int power = 8;
//  printf("%d up is %d\n", nb, power, ft_recursive_power(nb, power));
//  return 0;
// }