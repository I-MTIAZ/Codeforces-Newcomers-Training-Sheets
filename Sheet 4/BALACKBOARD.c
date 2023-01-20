/// string remorver , ek dam bazarer shera!.
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char a[10];

    int i, j;
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        for(j = i; a[j] != '\0'; j++)
        {
            if(i == 3)
                a[j] =a [j + 1];
        }
    }

    puts(a);


}
*/
/*
/// exchange char
#include<stdio.h>
#include<string.h>

int main()
{
    char a[10];

    int i, j, t;
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        for(j = i; j < strlen(a) - 1; j++)
        {
            if(i == 3)
            {
            t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
            }

        }
    }

    puts(a);


}
*/
/*
/// UPDATE 2021 string remorver , ek dam bazarer shera!.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[10];

    int i, j;
    gets(a);
    for(i = 3; a[i] != '\0'; i++)
    {
                a[i] = a[i + 1];
    }

    puts(a);


}*/



/*/// UPDATE 2021 exchange char
#include<stdio.h>
#include<string.h>

int main()
{
    char a[10];

    int i, j, t;
    gets(a);
    for(i = 2; i < strlen(a)-1; i++)
    {
            t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
    }

    puts(a);


}*/
/// sort caharcter
/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i , n, l, j, t;

    scanf("%d", &n);

    for(i = 0; i<n; i++)
        scanf("%c", &a[i]);
        a[i] = '\0';

    for(i = 0; i <= 5; i++)
    {
        for(j = i; j <= 5; j++)
        {
            if(a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;

            }
        }
    }
    printf("%s", a);
}*/

/// Add charcecter end e;

/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int n, i;
    n = 5;
    for(i = 0; i<n; i++)
        scanf(" %c", &a[i]);
    printf("%s\n",a);
    n = n+1;
    scanf(" %c", &a[n-1]);
    printf("%s", a);
}*/

/*#include<stdio.h> /// REPLACE NULL '\0'
#include<string.h>
int main()
{
    char a[10];
    int n, i;
    n = 5;
    for(i = 0; i < n; i++)
        scanf("%c", &a[i]);

    for(i = 0; i < n; i++)
       {
           if(a[i] == 'A')
           {
               a[strlen(a)] = a[i];
           }
       }
       //a[i] = '\0';





    puts(a);
}*/


/*#include<stdio.h> /// String index
#include<string.h>
int main()
{
    char a[10];
    int l;
    scanf("%s",a);
    l = strlen(a);
    printf("%d\n",l);
    a[l] = 'p';
    l = strlen(a);
    printf("%d\n",l);
    printf("%s",a);

}
#include<stdio.h> ///STRCPY
#include<string.h>

void STRCPY(char a[], char x[])
          {
            char b[200];
            int i , j, l, ll , m;
            l = strlen(a);
            ll = strlen(x);
            l-=1; ll -= 1; m = l+ll;

            for(i = 0; i <= l; i++)
                b[i] = a[i];
            for(i = l+1, j = 0; i <= m && j <= ll; i++, j++)
                b[i] = x[j];

                b[i] = '\0';

                printf("%s",b);

          }
int main()
{
          char x[100], a[100];
          scanf("%s", x);
          scanf("%s", a);

          STRCPY(x, a);
}


#include<stdio.h> ///STRLEN
#include<string.h>

int STRLEN(char a[])
          {
            int i, l = 0;

            for(i = 0; a[i] != '\0'; i++)
                l++;
                return l;
          }
int main()
{
          char x[100];
          int l;
          scanf("%s", x);
          l = STRLEN(x);
          printf("%d\n",l);

}


#include<stdio.h> ///STRCMP
#include<string.h>

int STRCMP(char a[], char x[])
          {
            int i , l, ll, j, f = 0;

        l = strlen(a);
        ll = strlen(x);

        for(i = 0, j = 0; a[i] != '\0'&& x[j] != '\0'; i++,j++)
        {
             if(a[i] != x[j])
             {
                 f = 1;
                 break;
             }

        }
        if(l == ll && f == 0)
            return 1;
        else if(l > ll && f ==1)
            return -1;
        else if(l < ll && f ==1)
            return 1;


    }
int main()
{
          char x[100], a[100];
          int i;
          scanf("%s", x);
          scanf("%s", a);

          i = STRCMP(x, a);
          printf("%d\n",i);
}

/*
#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100];
    int t;
    scanf("%s",a);
    scanf("%s",b);

    t = strcmp(a,b);
    printf("%d ",t);
}*/

/*#include<stdio.h> ///STRCAT
#include<string.h>

void STRCAT(char d[], char e[])
          {
            int i , j, l, ll , m;
            l = strlen(d);
            ll = strlen(e);
            l-=1; ll -= 1; m = l+ll;

            for(i = l+1, j = 0; i <= m && j <= ll; i++, j++)
                d[i] = e[j];

                d[i] = '\0';

          }
int main()
{
          char x[100], a[100];
          scanf("%s", x);
          scanf("%s", a);

          STRCAT(x, a);
          printf("%s",x);
}*/
/// What is string leanth
/*#include<stdio.h>
int main()
{
    char a[100];
    int i, l = 0;
    gets(a);
    //printf("%s\n", a);
    printf("%d\n",strlen(a));

    for(i = 0; i <= 5; i++)
        printf("%c",a[i]);
}*/
/*
/// Something wired you can see here~!
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[] = "imtiaz";
    gets(a);
    int i, j, f = 1, k;

    for(i = 0;a[i]; i++)  /// a[i]  == '\0' na obdhi loop cholbe
    {
        if(a[i] == ' ')
        {
            for(i++, j = 0; a[i] && b[j]; i++, j++){
                if(b[j] != a[i])
                    f = 0;
            }
            if(f == 1)
            printf("%s", a);
        }
    }

}*/
#include<stdio.h>
int main()
{
    int n, r, arr[100], i, j;
    scanf("%d", &n);
    i = 0;
    while(n > 0){
        r = n % 2;
        arr[i] = r;
        printf("%d",arr[i]);
        n /= 2;
        i++;
    }
    //printf("\n%d\n",j);
    printf("\n");
    j = i;
    for(i = j-1; i >= 0; i--)
        printf("%d",arr[i]);
}



