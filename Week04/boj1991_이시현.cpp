#define _CRT_SECURE_NO_WARNINGS //재귀함수 이용해 풀이했습니다
#include <stdio.h>
#include <stdlib.h>
int j = 0;
typedef struct _node {

    char left;
    char right;
}node;

node ary[100];

void post(char tree);

void in(char tree);

void pre(char tree);

int main() {
    int tries;
    int i = 0;
    char d1, d2, d3;

    scanf("%d", &tries); //개수 받기
    for (i = 0; i < tries; i++) {
        scanf(" %c %c %c", &d1, &d2, &d3); //각각의 트리 입력
        ary[d1].left = d2;
        ary[d1].right = d3;
    }
    pre('A');
    printf("\n");
    in('A');
    printf("\n");
    post('A');
    printf("\n");
}

void post(char tree) {
    if (tree == '.')
        return;
    else {
        post(ary[tree].left);
        post(ary[tree].right);
        printf("%c", tree);

    }
}

void in(char tree) {
    if (tree == '.')
        return;
    else {
        in(ary[tree].left);
        printf("%c", tree);
        in(ary[tree].right);
    }
}

void pre(char tree) {
    if (tree == '.')
        return;
    else {
        printf("%c", tree);
        pre(ary[tree].left);
        pre(ary[tree].right);
    }
}