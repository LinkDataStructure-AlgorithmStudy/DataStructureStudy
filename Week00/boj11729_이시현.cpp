#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//�ϳ���ž ����-����Լ� �̿�-
void hanoi(int from, int z, int to, int n);
int main(void)
{
    int n;
    scanf("%d", &n);//n�� �Է� 
    int a = (pow(2, n) - 1);
    printf("%d\n", a);//Ƚ�� ���
    hanoi(1, 2, 3, n); //ž ��ȣ �ű��-�Լ��� ������

}

void hanoi(int from, int z, int to, int n)
{
    if (n == 0)
        return;  //��������
    hanoi(from, to, z, n - 1);
    printf("%d %d \n", n, to);
    hanoi(z, from, to, n - 1);

}

