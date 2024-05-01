#include "ft_printf.h"
#include <stdio.h>
#include <ctype.h>
void check_c()
{
    for (int i = 0; i < 256; i++)
    {
        if (isprint(i))
        {
            int ret1 = ft_printf("%c ", i);
            int ret2 = printf("%c ", i);
            if (ret1 != ret2)
            {
                printf("return value\n");
                printf("%d %d\n", ret1, ret2);
                return ;
            }
            printf("\n");
        }
    }
    printf("Complete specifier c!\n");
}
void check_d()
{
    int arr[9] = {-2147483648, -10, -1, -0, 0, 1, 10, 2147483647, 2147483648};
    for (int i = 0; i < 9; i++)
    {
        int ret1 = ft_printf("%d ", arr[i]);
        int ret2 = printf("%d ", arr[i]);
        if (ret1 != ret2)
        {
            printf("return value\n\n\n");
            printf("%d %d\n", ret1, ret2);
            return ;
        }
        printf("\n");
    }
    printf("Complete specifier d!\n\n\n");
}
void check_i()
{
    int arr[9] = {-2147483648, -10, -1, -0, 0, 1, 10, 2147483647, 2147483648};
    for (int i = 0; i < 9; i++)
    {
        int ret1 = ft_printf("%i ", arr[i]);
        int ret2 = printf("%i ", arr[i]);
        if (ret1 != ret2)
        {
            printf("return value\n");
            printf("%d %d\n", ret1, ret2);
            return ;
        }
        printf("\n");
    }
    printf("Complete specifier i!\n\n\n");
}
int main()
{
    int a = 10;
    // fclose(stdout);
	check_c();
	check_d();
	check_i();
	int ret1 = ft_printf("ft_printf : %s %p %u %x %X %%\n", "hello", NULL, -1, -1, -1);
	int ret2 =    printf("   printf : %s %p %u %x %X %%\n", "hello", NULL, -1, -1, -1);
    printf("%d %d\n", ret1, ret2);
    // return (0);
}
