#include "main.h"

/**
* print_diagsums - prints the sum of two diagonals
* of square matrix of the integers
* @a: square matrix of integers
* @size: size of the matrix
*
* Return: None
*/

void print_diagsums(int *a, int size)
{

    
// (0    1    5) (10   11   12) (1000  101  102)

// i = 0, i = 4, i = 8

// i = i + size*(i)


// (size - 1) + (size - 1)

// flag at counter  == size

    int diagonal = 0, inv_diagonal = 0;
    int i;

    for(i = 0; a[i]; i += (size * i))
    {
        
        diagonal += a[i];

    }

    printf("%d\n", diagonal);

}

int main (void)
{

    int c3[3][3] = {{0,1,5},{10,11,12},{1000,101,102}}; // 113, 1016

    print_diagsums((int *)c3, 3);

    return 0;
}