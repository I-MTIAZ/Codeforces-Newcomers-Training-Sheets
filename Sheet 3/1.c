#include<stdio.h>
int main()
{
    int a[15][15], i,j;
    for(i = 0; i < 3; i++)
    {
        for(j= 0 ; j < 3; j++)
            scanf("%d", &a[i][j]);
    }

    for(i = 0; i < 3; i++)
    {
        for(j= 0 ; j < 3; j++)
        {


            if(a[0][1] == a[0][2])
                a[0][0]= a[0][1];

            else if(a[1][0] == a[1][2])
                a[1][1]= a[1][0];


            else if(a[2][0] == a[2][1])
                a[2][2]= a[2][1];
        }

    }


    for(i = 0; i < 3; i++)
    {
        for(j= 0 ; j < 3; j++)
        printf("%d ", a[i][j]);

        printf("\n");
    }
}
