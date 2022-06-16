#include "./header.h"



void	print_key(void)
{
	int i;
	static char keys[300];
	t_keycode en;

	keys[13] = 'W';
	i = 0;
	while (i < 300)
	{
		if (keys[i])
		{
			en = i;
			printf("ft_print_key %c %d\n", keys[i], *ft_keycode(i));
		}
		i++;
	}
}

int	*ft_keycode(int key)
{
	static int keys[300];

	return (&(keys[key]));
}

int		key_down(int keycode)
{
	*(ft_keycode(keycode)) = 1;
	printf("%d \n", *(ft_keycode(keycode)));
	return 0;
}

int		key_up(int keycode)
{
	*(ft_keycode(keycode)) = 0;
	printf("%d keycoup\n", *(ft_keycode(keycode)));
	return 0;
}


// void	set_key(t_keycode key)
// {
// 	(ft_keys())-> = ;
// }

t_key	*ft_keys(void)
{
	static t_key key;


	return (&key);
}



void	init_keys(void)
{
	(ft_keys())->D = 0;
	(ft_keys())->S = 0;
	(ft_keys())->W = 0;

}