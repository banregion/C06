#include <unistd.h>

char puthcar(char c)
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
            putchar(*p);
            p++;
        }
        putchar('\n');
        i++;
        
    }
    return 0;
    
}
