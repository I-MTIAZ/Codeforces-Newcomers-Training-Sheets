///MAde by IMTIAZ HOssAIN
#include<stdio.h>

void days(int a, int b, int c)
{
    int y, m;
    y = a * 365;
    m = b * 30;
    m = m + y + c;

    if(m <= 1)
        printf("You Lived %d Day by The Grace of Allah(s)\n", m);
    else
        printf("You Lived %d Days by The Grace of Allah(s)\n", m);

}


int day(int a, int b, int c)
{
    int y, m;
    y = a * 365;
    m = b * 30;
    m = m + y + c;
    return m;
}

void rec(int x)
{
        int i;

            for(i = 1; i <= 4; i++)
            printf("%c\n", x);





}





int main()
{
    int y, m , d, h;

    int p;
    scanf("%d%d%d", &y, &m, &d);
    days(y, m, d);

    h = day(y , m, d);
    printf("PRESS 7 to Get A Reception for DAys !");

    scanf("%d", &p);

    rec(p);

}
