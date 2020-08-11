#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i,j;
    int t,test;

    scanf("%d",&t);

    for (test=1;test<=t;test++)
    {
        int k;
        int blocked;

        scanf("%d", &k);

        blocked = 64 - k;

        for (i=1;i<=8;i++)
        {
            for (j=1;j<=8;j++)
            {
                if (i == 8 && j == 8)
                {
                    printf("O");
                    continue;
                }

                if (blocked > 0)
                {
                    printf("X");
                    blocked--;
                }
                else
                {
                    printf(".");
                }
            }
            printf("\n");
        }
    }

    return 0;
}