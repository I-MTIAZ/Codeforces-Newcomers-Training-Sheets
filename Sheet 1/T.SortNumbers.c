#include<stdio.h>
int main()
{
    int i, j, t;
    int a[100];
    for(i =1 ; i <= 3; i++)
    {
        scanf("%d",& a[i]);
    }

    for(i =1; i <= 3; i++)
    {
        for(j = i + 1; j <= 3; j++)
        {
            if(a[i] > a[j])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }


    for(i =1; i <= 3; i++)
    {
        printf("%d\n",a[i]);
    }
        printf("\n");

    for(i =3; i > 0; i--)
    {
        printf("%d\n",a[i]);
    }

    return 0;


}
