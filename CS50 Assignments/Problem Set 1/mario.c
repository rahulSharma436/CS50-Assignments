#include <stdio.h>

void main()
{
    int n;
    // taking input as there can be any number of blocks
    n=printf("Blocks : ");
    scanf("%d",&n);

    for ( int rows = 0 ; rows < n ; rows++)
    {
        // using this for loop for printing spaces, goes from 0 to n-rows-1 i:e from 0 to 2 for the first iteration
        for ( int spaces = 0 ; spaces < n-rows-1 ; spaces++)
        { 
            printf(" ");
        }

        // using this for loop to print the symbol 
        for ( int hash = 0 ; hash <= rows ; hash++)
        {
            printf("#");
        }

        printf("\n");
    }

}