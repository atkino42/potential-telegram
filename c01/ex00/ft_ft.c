#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = '42';
}

int	main(void)
{
	int	a;
	int	*nbr;
	
	a = '11';
	write(1,&a, 2);
	ft_ft(nbr);
	write(1, &a, 2);
	return (0);
}
