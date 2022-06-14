#include "./header.h"

int		ft_key_hook(int keycode, t_window *w)
{
	if (keycode == 15)
	{
		printf("Key01\n");
		exit(1);
	}
	if (keycode == 2)
		printf("Key02\n");
	if (keycode == 4)
		printf("Key02\n");

	return (0);
}
