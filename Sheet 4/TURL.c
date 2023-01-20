#include<stdio.h>
#include<string.h>
int main()
{
    char a[1010], b[1010];
    int i,j;
    gets(a);

    for(i = 0; a[i] != '\0'; i++){
        if(a[i] == '=')
        {
            while(1)
            {
                printf("%c",a[i])
            }
        }
    }
}
