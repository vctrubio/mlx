#include "./header.h"

#define HEIGHT 700
#define WIDTH 400

void	init_mlx_window(t_window **w)
{
	(*w) = malloc(sizeof(t_window));
	(*w)->mlx_ptr = mlx_init();
	(*w)->height = HEIGHT; 
	(*w)->weight = WIDTH;
	(*w)->mlx_window = mlx_new_window((*w)->mlx_ptr, (*w)->weight, (*w)->height, "My notverygood Cube");
}

void	init_img_data(t_img **img, t_window **w)
{
	(*img) = malloc(sizeof(t_img));
	(*w)->img = *img;
	// void	*mlx_new_image(void *mlx_ptr,int width,int height);
	(*img)->img = mlx_new_image((*w)->mlx_ptr, WIDTH - 100, HEIGHT - 100);
	(*w)->img->img = mlx_get_data_addr((*w)->img->img, &(*w)->img->bits_per_pixel, &(*w)->img->line_length, &(*w)->img->endian);
}


// int offset = (y * img.line_length + x * (img.bits_per_pixel / 8));
//  index = line_len * y + x * (bpp / 8);
void	img_pixel_put(t_img *img, int x, int y, int color)
{
	char    *pixel;
	int		i;

	char *mlx_data_addr = img->img;
	*(unsigned int *)mlx_data_addr = color;

    pixel = img->addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
	i = 0;
	while(i < x)
	{
		i++;
	}
}



int main()
{
	t_window	*w;
	t_img		*img;
	int x = 400; int y = 400;


	init_mlx_window(&w);
	init_img_data(&img, &w);
	
	img_pixel_put(img, 10, 40, 0x00ff110022);

	mlx_key_hook(w->mlx_window, ft_key_hook, w);
	mlx_put_image_to_window(w->mlx_ptr, w->mlx_window, w->img->img, 20, 20);
	mlx_loop(w->mlx_ptr);

	return (43);
}