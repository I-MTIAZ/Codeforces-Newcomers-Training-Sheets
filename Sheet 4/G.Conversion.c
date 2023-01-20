#include<stdio.h>
#include<string.h>
int main()
{
    char a[100010];
    int i;
    gets(a);

    for(i = 0; a[i] != '\0'; i++){
        if(a[i] == ',')
            printf(" ");
        else if(a[i] >= 97 && a[i] <= 122)
            printf("%c",a[i]-32);
        else if(a[i] >= 65 && a[i] <= 90)
            printf("%c",a[i] + 32);
    }
}
