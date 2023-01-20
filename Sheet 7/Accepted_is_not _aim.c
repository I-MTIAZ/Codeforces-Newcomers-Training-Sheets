/*#include<stdio.h>
int a[1010];
void fun1(int n)
    {                   /// star star star star
    if(n == 0) return;

    printf("%d ",a[n-1]);
    fun1(n-2);
    }

void fun2(int n)
    {
    if(n == 0) return;

    if(n % 2 != 0)
    printf("%d ",a[n]);

    fun2(n-1);
    }

int main()
{
    int i, n, j = 0;
    scanf("%d", &n);
    for(i = 1; i <= n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n % 2 == 0)
    fun1(n);
    else
    fun2(n);

}
#include<stdio.h>
int main()
{
                    ///   *
                    ///  ***
                    /// *****
    int n, i, j;
    scanf("%d", &n);

       for(j = 1;j <= n-1; j++)
            printf(" ");
        for(j = 0; j < n*2-1; j++)
            printf("*");
            printf("\n");
}*/
/*
/// up or down function call

#include<stdio.h>  /// 1 2 3 4 5
int main()
{
    int n, m;
    scanf("%d", &n);
    m = fun(n);
    printf("\n\n\n%d ",m);
}

int fun(int a)
{
    printf("%d ", a);
    int num;
    if(a == 1) return 2;

    num = fun(a - 1);
    printf("\n= '%d'",num);
    return num;
}*/
#include<stdio.h>
int print(int i, int n)
{
    int num;
printf("%d ", i);
    if(i>n)
        return 1200;


    num = print(i+1, n);
    return num;

    if(i == 1)
        printf("%d",i);
    else
    printf("%d ", i);
}

int main()
{
    int n, i, j;
    scanf("%d", &n);

    j = print(1, n);
    printf("\n\n%d", j);
}




