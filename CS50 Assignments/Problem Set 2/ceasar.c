#include<stdio.h>
#include<string.h>

void main()
{
    char input[10];
    int encodePattern;

    printf("Define Encoding Pattern: ");
    scanf("%d",&encodePattern);

    printf("plaintext :");
    scanf("%s",&input);
    

    for ( int i = 0 ; input[i] != '\0' ; i++)
    {
        input[i]= input[i]+ encodePattern;
        
    }


    printf("ceasartext :%s" , input);
}