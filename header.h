#ifndef HEADER_H
# define	HEADER_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include "./lmlx/mlx.h"

typedef struct	s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img;

typedef struct	s_window
{
	void	*mlx_ptr;
	void	*mlx_window;
	int		height;
	int		weight;
	t_img	*img;
}				t_window;

typedef struct s_rect
{
	int	x;
	int	y;
	int width;
	int height;
	int color;
}	t_rect;

//keys
int		ft_key_hook(int keycode, t_window *w);

#endif