#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    int i;
    printf("вводи число");
    scanf_s("%d", &i);
    int per = i / 100;
    int tri = i % 10;
    int dva = (i - (per * 100) - tri) / 10;
    int summa = per + tri + dva;
    printf("первое - %d, последнее - %d, сумма - %d\n", per, tri, summa);
    printf("%d%d%d", tri, dva, per);
    return 0;
    system("pause");
}