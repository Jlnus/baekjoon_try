#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
		return (nb);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}

int main()
{
    int N;
    scanf("%d",&N);
	printf("%d\n",ft_recursive_factorial(N));
	 
}
