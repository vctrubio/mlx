#include "./header.h"

#define HEIGHT 800
#define WIDTH 400

/* NOTES
When you increment the pointer by one by one, you’re moving forward one byte in memory, so the final offset should be multiplied by 4.
(y * line_bytes) + (x * 4)
*/

// int		ft_key_hook(int keycode)
// {

// }

int main()
{
	init_prg();
	init_window(200, 400, "Title");

	mlx_hook((ft_window())->mlx_window, 2, 1, key_down, NULL); 
	mlx_hook((ft_window())->mlx_window, 3, 1, key_up, NULL);

	// mlx_key_hook((ft_window())->mlx_window, ft_key_hook, );
	mlx_loop_hook((ft_prg()->mlx), print_key, NULL);
	mlx_loop((ft_prg())->mlx);

	return (43);
}

	// mlx_put_image_to_window(w->mlx_ptr, w->mlx_window, w->img->img, 0, 0);
	// printf("info: %dbbp %dline_length %dendian\n", img->bits_per_pixel, img->line_length, img->endian);
	// int i; int j;
	// i = 0; j = 5;
	// while (i <= 10)
	// {
	// 	img_pixel_put(img, i, j, 0xFF0000);
	// 	i++;
	// }


/* GOALS
1. draw shapes, and move with different keystrokes
2. draw a circle 
3. export a "".ber" map
4. make a player- that can move- wih xmp

*/