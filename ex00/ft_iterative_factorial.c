#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb < 0)
		return 0;
	while (i <= nb)
	{
		fact *= i;
		i ++;
	}
	return(fact);
}
// int main() {
//     int nb;
// 	nb = 7;
//     printf("Factorial is %d\n", nb, ft_iterative_factorial(nb));
//     return 0;
// }