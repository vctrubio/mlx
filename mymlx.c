#include "./header.h"

void	init_prg(void)
{
	(ft_prg())->mlx = mlx_init();
}

t_prg	*ft_prg(void)
{
	static t_prg p;

	return (&p);
}
