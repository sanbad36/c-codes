// program to sort the strings 
#include<stdio.h>
#include<string.h>

void main()
{
    int i, j, n;
    char str[20][20], temp[20];

    printf("Enter the number of string to be sorted : ");
    scanf("%d", &n);
    int fflush(FILE *stream);


    for (i = 0; i < n; i++)
        gets(str[i]);

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }

    printf("\nSorted string :");
    for (i = 0; i <= n; i++)
    {
        puts(str[i]);
    }
    
}