#include<stdio.h>
#include<string.h>
int main()
{
    char a[100010];
    int i, n;

    scanf("%d",&n);
    scanf("%s",a);

    if(n == 2)
    {
        for(i = 0; a[i] != '\0'; i++)
        {
            if(a[i] == 'P') printf("a");
            else if(a[i] == 'g') printf("b");
            else if(a[i] == 'E') printf("c");
            else if(a[i] == 'f') printf("d");
            else if(a[i] == 'T') printf("e");
            else if(a[i] == 'Y') printf("f");
            else if(a[i] == 'a') printf("g");
            else if(a[i] == 'W') printf("h");
            else if(a[i] == 'G') printf("i");
            else if(a[i] == 'H') printf("j");
            else if(a[i] == 'j') printf("k");
            else if(a[i] == 'D') printf("l");
            else if(a[i] == 'A') printf("m");
            else if(a[i] == 'm') printf("n");
            else if(a[i] == 'x') printf("o");
            else if(a[i] == 'Q') printf("p");
            else if(a[i] == 'q') printf("q");
            else if(a[i] == 'F') printf("r");
            else if(a[i] == 'L') printf("s");
            else if(a[i] == 'R') printf("t");
            else if(a[i] == 'p') printf("u");
            else if(a[i] == 'C') printf("v");
            else if(a[i] == 'J') printf("w");
            else if(a[i] == 'B') printf("x");
            else if(a[i] == 'o') printf("y");
            else if(a[i] == 'w') printf("z");

            else if(a[i] == 'n') printf("A");
            else if(a[i] == 'y') printf("B");
            else if(a[i] == 'U') printf("C");
            else if(a[i] == 'K') printf("D");
            else if(a[i] == 'Z') printf("E");
            else if(a[i] == 'X') printf("F");
            else if(a[i] == 'k') printf("G");
            else if(a[i] == 'b') printf("H");
            else if(a[i] == 'v') printf("I");
            else if(a[i] == 'z') printf("J");
            else if(a[i] == 'I') printf("K");
            else if(a[i] == 'd') printf("L");
            else if(a[i] == 's') printf("M");
            else if(a[i] == 'h') printf("N");
            else if(a[i] == 'u') printf("O");
            else if(a[i] == 'r') printf("P");
            else if(a[i] == 'M') printf("Q");
            else if(a[i] == 'i') printf("R");
            else if(a[i] == 'l') printf("S");
            else if(a[i] == 'N') printf("T");
            else if(a[i] == 'S') printf("U");
            else if(a[i] == 'V') printf("V");
            else if(a[i] == 'O') printf("W");
            else if(a[i] == 't') printf("X");
            else if(a[i] == 'e') printf("Y");
            else if(a[i] == 'c') printf("Z");

            else if(a[i] == '#') printf("0");
            else if(a[i] == '@') printf("1");
            else if(a[i] == '_') printf("2");
            else if(a[i] == '!') printf("3");
            else if(a[i] == '=') printf("4");
            else if(a[i] == '.') printf("5");
            else if(a[i] == '+') printf("6");
            else if(a[i] == '-') printf("7");
            else if(a[i] == '*') printf("8");
            else if(a[i] == '/') printf("9");

        }
    }
    else if(n == 1)
    {
            for(i = 0; a[i] != '\0'; i++)
        {
            if(a[i] == 'a') printf("P");
            else if(a[i] == 'b') printf("g");
            else if(a[i] == 'c') printf("E");
            else if(a[i] == 'd') printf("f");
            else if(a[i] == 'e') printf("T");
            else if(a[i] == 'f') printf("Y");
            else if(a[i] == 'g') printf("a");
            else if(a[i] == 'h') printf("W");
            else if(a[i] == 'i') printf("G");
            else if(a[i] == 'j') printf("H");
            else if(a[i] == 'k') printf("j");
            else if(a[i] == 'l') printf("D");
            else if(a[i] == 'm') printf("A");
            else if(a[i] == 'n') printf("m");
            else if(a[i] == 'o') printf("x");
            else if(a[i] == 'p') printf("Q");
            else if(a[i] == 'q') printf("q");
            else if(a[i] == 'r') printf("F");
            else if(a[i] == 's') printf("L");
            else if(a[i] == 't') printf("R");
            else if(a[i] == 'u') printf("p");
            else if(a[i] == 'v') printf("C");
            else if(a[i] == 'w') printf("J");
            else if(a[i] == 'x') printf("B");
            else if(a[i] == 'y') printf("o");
            else if(a[i] == 'z') printf("w");

            else if(a[i] == 'A') printf("n");
            else if(a[i] == 'B') printf("y");
            else if(a[i] == 'C') printf("U");
            else if(a[i] == 'D') printf("K");
            else if(a[i] == 'E') printf("Z");
            else if(a[i] == 'F') printf("X");
            else if(a[i] == 'G') printf("k");
            else if(a[i] == 'H') printf("b");
            else if(a[i] == 'I') printf("v");
            else if(a[i] == 'J') printf("z");
            else if(a[i] == 'K') printf("I");
            else if(a[i] == 'L') printf("d");
            else if(a[i] == 'M') printf("s");
            else if(a[i] == 'N') printf("h");
            else if(a[i] == 'O') printf("u");
            else if(a[i] == 'P') printf("r");
            else if(a[i] == 'Q') printf("M");
            else if(a[i] == 'R') printf("i");
            else if(a[i] == 'S') printf("l");
            else if(a[i] == 'T') printf("N");
            else if(a[i] == 'U') printf("S");
            else if(a[i] == 'V') printf("V");
            else if(a[i] == 'W') printf("O");
            else if(a[i] == 'X') printf("t");
            else if(a[i] == 'Y') printf("e");
            else if(a[i] == 'Z') printf("c");

            else if(a[i] == '0') printf("#");
            else if(a[i] == '1') printf("@");
            else if(a[i] == '2') printf("_");
            else if(a[i] == '3') printf("!");
            else if(a[i] == '4') printf("=");
            else if(a[i] == '5') printf(".");
            else if(a[i] == '6') printf("+");
            else if(a[i] == '7') printf("-");
            else if(a[i] == '8') printf("*");
            else if(a[i] == '9') printf("/");

        }
    }

}
