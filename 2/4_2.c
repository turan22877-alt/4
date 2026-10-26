#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");

    int a = 11, b = 3;
    /*int x;
    float y;
    double z;
    x = a / b;
    y = a / b;
    z = a / b;
    printf("%d, %f, %lf", x, y, z);*/
    int f = (int)a / b;
    float ff = (float)a / b;
    double fff = (double)a / b;
    printf("int - %d, float - %f, double - %f", f, ff, fff);
    //дабл во флот качует
    return 0;
    system("pause");
}