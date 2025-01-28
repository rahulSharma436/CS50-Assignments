#include <stdio.h>

void checkValidity(long num[]);

void main()
{
    long credNum[20],*comp = 10000000000;
    printf("Enter the Number : ");
    for ( int store = 0 ; store < 20 ; store++)
    {
        scanf("%ld", &credNum[store]);
    }
    checkValidity(credNum);

}

void checkValidity(long num[])
{
    int product = 2, evenSum = 0, oddSum = 0, result;
    int reference;
    for ( int odd = 1 ; odd < 17 ; odd++)
    {
        
        reference = (product * num[odd]);
        if ( reference < 9)
        {
            oddSum = (product * num[odd]) + oddSum; 
        }
        else
        {
           
            oddSum = oddSum + reference/10 + reference%10 ;
        }
    }

    for ( int even = 0 ; even < 16 ; even ++)
    {
        evenSum = evenSum + num[even];
    }

    result = oddSum + evenSum;

    if(result%10==0)
    {
        printf("VALID Visa\n");
    }


}