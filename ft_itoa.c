#include "libft.h"
static size_t ft_size_calulate(int n){
    size_t res;

    res = 0;
    while(n > 0){
        res *= 10;
        res += n / 10;
    }
    return (res);
} 
char *ft_itoa(int n){
    char *result;
    size_t size;
    int sign;

    sign = 0;
    if (n < 0)
    {
        n = -n;
        sign = 1;
    }
    if(!(size = ft_size_calculate(n))){
        result = (char *)ft_calloc(2, 1);
        *result = '0';
        return (result);
    }
    result = (char *)malloc()
}