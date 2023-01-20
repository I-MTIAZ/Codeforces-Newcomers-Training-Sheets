#include<stdio.h>
#include<string.h>
int main()
{
    char a[100010];
    int n, i,j = 0, l, k = 0;

    scanf("%d",&n);


    for(i=0; i<n ; i++)
    {
        scanf(" %c",&a[i]);
    }
    l = strlen(a);

    for(i=0; i < l; i++)
    {
        if(a[i] == a[i+1])
        {
            j++;
        }
    }


        printf("%d\n",j);

    return 0;
}
