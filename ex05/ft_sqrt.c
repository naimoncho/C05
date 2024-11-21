#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 2)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i ++;
	}
	return (-1);
}
// int main()
// {
// 	printf ("square of %d is %d\n", 9, ft_sqrt(9));
// 	return 0;
// }