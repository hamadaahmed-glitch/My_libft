// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int plus = 2;
//     int sourcec[10] = {1,2,3,4,5,6,7,8,9,10};
//     int sourcem[10] = {1,2,3,4,5,6,7,8,9,10};
//     int destc[10];
//     memcpy(destc, sourcec, 10);
//     memmove(sourcem+plus , sourcem, 10-plus);
//     int i = 0;
//     while(i < 10){
//         printf("Dest_copy[%d] = %d\t", i, destc[i]);
//         printf("Dest_move[%d] = %d\n", i, sourcem[plus+i]);
//         i++;
//     }
//     i = 0;
//     while(i < 10){
//         printf("Source_copy[%d] = %d\t", i, sourcec[i]);
//         printf("Source_move[%d] = %d\n", i, sourcem[i]);
//         i++;
//     }
// }
// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int plus = 5;
//     int source_o[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int source_lib[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     memmove(source_o + plus, source_o, (10 - plus) * sizeof(int));
//     ft_memmove(source_lib + plus, source_lib, (10 - plus) * sizeof(int));

//     int i = 0;
//     while (i < 10) {
//         if (i + plus < 10)
//             printf("Sourcem_o[%d] = %d\n", i + plus, source_o[plus + i]);
//             printf("Sourcem_lib[%d] = %d\n", i + plus, source_lib[plus + i]);

//         else
//             printf("Sourcem_o[%d] = (out of bounds)\n", i + plus);
//             printf("Sourcem_lib[%d] = (out of bounds)\n", i + plus);
            
//         i++;
//     }

//     printf("\n------------------- Full arrays ---\n");
//     i = 0;
//     while (i < 10) {
//         printf("Source_o[%d] = %d\t", i, source_o[i]);
//         printf("Source_lib[%d] = %d\n", i, source_lib[i]);
//         i++;
//     }

//     return 0;
// }


// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int plus = 2;
//     int source_o[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int source_lib[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     memmove(source_o + plus, source_o, (10 - plus) * sizeof(int));
//     ft_memmove(source_lib + plus, source_lib, (10 - plus) * sizeof(int));

//     int i = 0;
//     while (i < 10) {
//         if (i + plus < 10) {
//             printf("Sourcem_o[%d] = %d\t\t", i + plus, source_o[plus + i]);
//             printf("Sourcem_lib[%d] = %d\n", i + plus, source_lib[plus + i]);
//         } else {
//             printf("Sourcem_o[%d] = (out of bounds)\t", i + plus);
//             printf("Sourcem_lib[%d] = (out of bounds)\n", i + plus);
//         }
//         i++;
//     }

//     printf("\n------------------- Full arrays ---\n");
//     i = 0;
//     while (i < 10) {
//         printf("Source_o[%d] = %d\t\t\t| Source_lib[%d] = %d\n", i, source_o[i], i, source_lib[i]);
//         i++;
//     }

//     return 0;
// }


#include "libft.h"
#include <stdio.h>
#include <string.h>

static void compare_arrays(const char *test, const void *expected,
    const void *actual, size_t size)
{
    const unsigned char *a = expected;
    const unsigned char *b = actual;
    size_t i;

    i = 0;
    while (i < size)
    {
        if (a[i] != b[i])
        {
            printf("[FAIL] %s\n", test);
            return;
        }
        i++;
    }
    printf("[OK]   %s\n", test);
}

static void test_overlap_right(void)
{
    int original[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int expected[10];
    int actual[10];

    memcpy(expected, original, sizeof(original));
    memcpy(actual, original, sizeof(original));

    memmove(expected + 2, expected, 8 * sizeof(int));
    ft_memmove(actual + 2, actual, 8 * sizeof(int));

    compare_arrays("Overlap: move right",
        expected, actual, sizeof(expected));
}

static void test_overlap_left(void)
{
    int original[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int expected[10];
    int actual[10];

    memcpy(expected, original, sizeof(original));
    memcpy(actual, original, sizeof(original));

    memmove(expected, expected + 2, 8 * sizeof(int));
    ft_memmove(actual, actual + 2, 8 * sizeof(int));

    compare_arrays("Overlap: move left",
        expected, actual, sizeof(expected));
}

static void test_different_arrays(void)
{
    char src[] = "Hello World";
    char expected[20] = {0};
    char actual[20] = {0};

    memmove(expected, src, sizeof(src));
    ft_memmove(actual, src, sizeof(src));

    compare_arrays("Different arrays",
        expected, actual, sizeof(expected));
}

static void test_same_pointer(void)
{
    char expected[] = "Hello";
    char actual[] = "Hello";

    memmove(expected, expected, sizeof(expected));
    ft_memmove(actual, actual, sizeof(actual));

    compare_arrays("Same source and destination",
        expected, actual, sizeof(expected));
}

static void test_zero_bytes(void)
{
    char expected[] = "Hello";
    char actual[] = "Hello";

    memmove(expected + 1, expected, 0);
    ft_memmove(actual + 1, actual, 0);

    compare_arrays("Zero bytes",
        expected, actual, sizeof(expected));
}

static void test_one_byte(void)
{
    char expected[] = "ABCDE";
    char actual[] = "ABCDE";

    memmove(expected + 1, expected, 1);
    ft_memmove(actual + 1, actual, 1);

    compare_arrays("One byte",
        expected, actual, sizeof(expected));
}

static void test_full_array(void)
{
    int expected[5] = {1, 2, 3, 4, 5};
    int actual[5] = {1, 2, 3, 4, 5};

    memmove(expected, expected, sizeof(expected));
    ft_memmove(actual, actual, sizeof(actual));

    compare_arrays("Full array",
        expected, actual, sizeof(expected));
}

int main(void)
{
    printf("Testing ft_memmove:\n\n");

    test_overlap_right();
    test_overlap_left();
    test_different_arrays();
    test_same_pointer();
    test_zero_bytes();
    test_one_byte();
    test_full_array();

    return (0);
}