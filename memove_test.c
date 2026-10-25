/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   memove_test.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 14:11:14 by username         #+#    #+#              */
/*   Updated: 2026/10/25 14:11:14 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

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
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	plus = 5;

	int	source_o[10] =
	{
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	};
	int	source_lib[10] =
	{
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	};
	memmove(source_o + plus, source_o, (10 - plus) * sizeof(int));
	ft_memmove(source_lib + plus, source_lib, (10 - plus) * sizeof(int));
	int	i = 0;

	while (i < 10)
	{
		if (i + plus < 10)
		{
			printf("Sourcem_o[%d] = %d\n", i + plus, source_o[plus + i]);
			printf("Sourcem_lib[%d] = %d\n", i + plus, source_lib[plus + i]);
		}
		else
		{
			printf("Sourcem_o[%d] = (out of bounds)\n", i + plus);
			printf("Sourcem_lib[%d] = (out of bounds)\n", i + plus);
		}
		i++;
	}
	printf("\n------------------- Full arrays ---\n");
	i = 0;
	while (i < 10)
	{
		printf("Source_o[%d] = %d\t", i, source_o[i]);
		printf("Source_lib[%d] = %d\n", i, source_lib[i]);
		i++;
	}
	return (0);
}

//#include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     int plus = 2;
//     int source_os[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int source_o[10];
//     //int source_lib[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     memmove(source_o + plus, source_os, -1);
//     //ft_memmove(source_lib + plus, source_lib, (10 - plus) * sizeof(int));

//     int i = 0;
//     while (i < 20 ) {
//         if (i + plus < 10 && i + plus >= 0) {
//             printf("Sourcem_o[%d] = %d\n", i + plus, source_o[plus + i]);
//             //printf("Sourcem_lib[%d] = %d\n", i + plus, source_lib[plus + i]);
//         } else if (i + plus < 0) {
//             printf("Sourcem_o[%d] = (back of bounds)\n", i + plus);
//             //printf("Sourcem_lib[%d] = %d\n", i + plus, source_lib[plus + i]);
//         } else {
//             printf("Sourcem_o[%d] = (out of bounds)\n", i + plus);
//             //printf("Sourcem_lib[%d] = (out of bounds)\n", i + plus);
//         }
//         i++;
//     }

//     // printf("\n------------------- Full arrays ---\n");
//     // i = 0;
//     // while (i < 10) {
//     //     printf("Source_o[%d] = %d\n", i, source_o[i]);
//     //     i++; // \t\t\t| Source_lib[%d] = %d        , i, source_lib[i]
//     // }

//     return 0;
// }
