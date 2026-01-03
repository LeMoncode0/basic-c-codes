#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Birinci sayýyý giriniz: ");
    scanf("%d", &a);

    printf("Ýkinci sayýyý giriniz: ");
    scanf("%d", &b);

    printf("Üçüncü sayýyý giriniz: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("En büyük sayý: %d\n", a);
    } else if (b > a && b > c) {
        printf("En büyük sayý: %d\n", b);
    } else {
        printf("En büyük sayý: %d\n", c);
    }

    system("pause");
    return 0;
}
