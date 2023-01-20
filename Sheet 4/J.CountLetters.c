#include<stdio.h>
int main()
{
    char a[10000010];
    int i, c, j;

    gets(a);

    for(i = 97; i <= 122; i++){
            c = 0;
        for(j = 0; a[j] != '\0'; j++){
            if(i == a[j]){
                c++;
            }
        }
           if(c != 0)
                printf("%c : %d\n",i,c);
    }
    return 0;
}
