#include <unistd.h>

char ft_puthcar(char c)
{
    write(1,&c,1);
}
int ft_strcmp(char *a,char *b)
{
    while(*a && *b)
    {
        if(*a != *b)
            return(*a-*b);
        a++;
        b++;    
    }
    return(*a-*b);
}
int swap(char **a,char **b)
{
    char *tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(int argc,char *argv[])
{
    int i = 1;

    while (i < argc -1)
    {
        int j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[1], argv[j] > 0))
                swap(&argv[i],&argv[j]);
            
            j++;
        }
        i++;
    }

    i = 1;
    while (i < argc)
    {
        char *p = argv[i];
        while (*p)
        {
            ft_putchar(*p);
            p++;
        }
        ft_putchar('\n');
        i++;
        
    }
    return 0;
    
}
 /*#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
	}
	return (*a - *b);
}

void	swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*p;

	sort_args(argc, argv);
	i = 1;
	while (i < argc)
	{
		p = argv[i];
		while (*p)
			put_char(*p++);
		put_char('\n');
		i++;
	}
	return (0);
}
*/
