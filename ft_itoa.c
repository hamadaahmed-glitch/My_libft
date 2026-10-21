#include "libft.h"
static size_t ft_size_calculate(int n){
    size_t res;
    // if (n == 0)
    //     return (1);
    res = 0;
    while(n > 0){
        // res *= 10;
        // n += n / 10;
        n /= 10;
        res++;
    }
    return (res);
}
char *ft_itoa(int n){
    char *result;
    size_t size;
    int sign;
    size_t i;
    long nb;
    
    if(n == 0){
        result = (char *)ft_calloc(2, 1);
        if(!result)
            return (NULL);
        *result = '0';
        return (result);
    }

    nb = (long)n;
    sign = 0;
    if (nb < 0)
    {
        nb = -nb;
        sign = 1;
    }
    size = ft_size_calculate(nb);
    result = ft_calloc(sizeof(char), size + sign + 1);
    if(!result)
        return (NULL);

    if(sign){
        result[0] = '-';
        //sign = 0;
    }
    //sign && result[0] = '-';    
    i = size + sign;
    while(i > sign){
        result[i--] = nb % 10 + 48;
        nb /= 10;
    }
    return (result);

    //result = (char *)malloc();
}


#include <stdio.h>

int main(){
    printf("%s", ft_itoa(-1));
}


/*The problem is that `nb % 10` extracts digits from right to left. For `123`, you get `3`, then `2`, then `1`.

Hint: start filling the string from the end.

Replace your loop with:

c
```
i = size + sign;
while (i > sign)
{
    result[--i] = nb % 10 + '0';
    nb /= 10;
}
if (sign)
    result[0] = '-';
```

Why does this work?

- `i = size + sign` starts at the end of the digit area.
- `--i` moves backward before writing each digit.
- `nb % 10 + '0'` converts the digit into its character.
- The `'-'` is placed at index `0` for negative numbers.

Your allocation of `size + sign + 1` already reserves space for the null terminator `'\0'`, thanks to `ft_calloc`.*/