#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//팩토리얼

int main()
{
    int n, result;
    result = 1;
    printf("N값을 입력하세요(12이하의 자연수)");
    scanf("%d/n", &n);
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    printf("%d", result);

    return 0;
}
