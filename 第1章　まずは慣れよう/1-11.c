#include <stdio.h>

int main(void) {
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数n1:");  scanf("%d", &n1);
    printf("整数n2:");  scanf("%d", &n2);

    int seki = n1 * n2;

    printf("それらの積は%dです。\n", seki);

    // int x;
    // int y;

    // scanf("%d", &x);
    // scanf("%d", &y);

    // printf("%d", x + y);

    return 0;
}