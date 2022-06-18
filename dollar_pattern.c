#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        printf("$");
    }
    printf("\n");
    for(int k=1;k<=2;k++)
    {
for (j = 1; j <= 4; j++)
        {
           if (j==2 || j==3)
            printf(" ");
           else
            printf("$");
        }
        printf("\n");
    }
    for (i = 1; i <= 4; i++)
    {
        printf("$");
    }

    getch();
    return 0;
}