#include<stdio.h>
#include<string.h>
int main()
{
    char a[1010];
    int i;
    gets(a);

    for(i = 0; a[i] != '\0'; i++){
        if(a[i] == 'E' && a[i+1] == 'G' && a[i+2] == 'Y'
           && a[i+3] == 'P' && a[i+4] == 'T')
        {
            printf(" ");
            i = i+4;
        }
        else
            printf("%c",a[i]);

    }




}


