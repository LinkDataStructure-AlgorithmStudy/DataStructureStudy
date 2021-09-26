#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//하노이탑 문제-재귀함수 이용-
void hanoi(int from, int z, int to, int n);
int main(void)
{
    int n;
    scanf("%d", &n);//n값 입력 
    int a = (pow(2, n) - 1);
    printf("%d\n", a);//횟수 출력
    hanoi(1, 2, 3, n); //탑 번호 매기기-함수로 보내기

}

void hanoi(int from, int z, int to, int n)
{
    if (n == 0)
        return;  //종료조건
    hanoi(from, to, z, n - 1);
    printf("%d %d \n", n, to);
    hanoi(z, from, to, n - 1);

}

