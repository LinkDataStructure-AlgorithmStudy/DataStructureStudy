#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���丮��

int main()
{
    int n, result;
    result = 1;
    printf("N���� �Է��ϼ���(12������ �ڿ���)");
    scanf("%d/n", &n);
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    printf("%d", result);

    return 0;
}
