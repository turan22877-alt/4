#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");

    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("чар %c, целое %d, флоат %.2f, добле %lf\n", c, i, f, d);

    printf("вводи\n");

    char cc ;
    int ii ;
    float ff ;
    double dd ;
    printf("\nВы введете: чар , целое , флоат , добле \n");
    scanf(" %c %d %f %lf", &cc, &ii, &ff, &dd);


    float ost = ff - (int)ff;
    printf("Число %.2f. Целое: %d, Дробнще: %.2f\n", ff, (int)ff, ost);
    printf("Символ '%c': десятичный = %d, шестнадцатеричный = %X\n", cc, cc, cc);

    return 0;
    system("pause");
}