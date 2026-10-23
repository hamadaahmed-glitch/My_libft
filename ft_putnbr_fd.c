#include "libft.h"

void ft_putnbr_fd(int n, int fd){
    if(n == -2147483648){
        ft_putstr_fd("-2147483648", fd);
        return ;
    }
    if(n < 0)
    {
        n = -n;
        ft_putchar_fd('-', fd);
    }
    if(n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
    }
    ft_putchar_fd((n % 10) + 48, fd);
}

#include <stdio.h>
int main(){
    printf(" 0 : ");
    ft_putnbr_fd(0, 1);
    printf("\n\n");


    printf(" 15 : ");
    ft_putnbr_fd(15, 1);
    printf("\n\n");


    printf(" -1 : ");
    ft_putnbr_fd(-1, 1);
    printf("\n\n");

    printf(" -2147483648 : ");
    ft_putnbr_fd(-2147483648, 1);
    printf("\n\n");

    printf(" 2147483648 : ");
    ft_putnbr_fd(2147483648, 1);
    printf("\n\n");


    // printf(" 0 : ");
    // ft_putnbr_fd(0, 1);
    // printf("\n\n");
    // printf(" 0 : ");
    // ft_putnbr_fd(0, 1);
    // printf("\n\n");
}