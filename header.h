#ifndef HEADER_H
# define	HEADER_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include "./lmlx/mlx.h"

typedef enum e_keycode
{
	W = 13,
	S = 1,
	D = 2,
	ESC = 53,
}				t_keycode;

typedef struct	s_key
{
	int W;
	int S;
	int D;
	int ESC;
}				t_key;

typedef struct	s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img; 

typedef struct	s_window
{
	void	*mlx_window;
	int		height;
	int		weight;
}				t_window; //object

typedef struct	s_prg
{
	void	*mlx;
}				t_prg; //object

typedef struct s_rect
{
	int	x;
	int	y;
	int width;
	int height;
	int color;
}	t_rect;

//window
void		init_window(int x, int y, char *title);
t_window	*ft_window(void);

//prg
t_prg	*ft_prg(void);
void	init_prg(void);

//keys
void	init_keys(void);
t_key	*ft_keys(void);
int		key_down(int keycode);
int		key_up(int keycode);
int		*ft_keycode(int key);
void	print_key(void);

#endif