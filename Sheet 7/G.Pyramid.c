#include<stdio.h>
int n;
void fun(int i)
{
    int j;

    if(i == 0) return;



     for(j = 1;j <= n - i; j++)
        printf(" ");
     for(j = 1; j <= 2*i-1; j++)
            printf("*");
            printf("\n");
    fun(i-1);

}

int main()
{
    scanf("%d", &n);
    fun(n);
}
