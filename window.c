#include "./header.h"

t_window	*ft_window(void)
{
	static t_window	w;

	return (&w);
}

void		init_window(int x, int y, char *title)
{
	(ft_window())->mlx_window = mlx_new_window((ft_prg())->mlx, x, y, title);
}
