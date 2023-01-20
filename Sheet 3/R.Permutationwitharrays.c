#include<stdio.h>
int main()
{
  int a[100000], b[100000], n, i, j, f = 0, t;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        scanf("%d",&a[i]);


    for(i = 1; i <= n; i++)
        {
            for(j = 1; j<= n; j++)
            {
                if(a[i] > a[j])
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;

                }
            }
        }



    for(i = 1; i <= n; i++)
        scanf("%d",&b[i]);

        for(i = 1; i <= n; i++)
        {
            for(j = 1; j<= n; j++)
            {
                if(b[i] > b[j])
                {
                    t = b[i];
                    b[i] = b[j];
                    b[j] = t;

                }
            }
        }


    for(i = 1; i <= n; i++)
    {
        if(b[i] == a[i])
            f++;
    }

    if(f == n)
        printf("yes\n");
    else
        printf("no\n");

        return 0;


}
