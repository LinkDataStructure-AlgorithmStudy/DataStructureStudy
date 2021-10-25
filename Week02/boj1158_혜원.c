#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 원형연결리스트 https://sewo.tistory.com/24?category=669086


struct node {           // 연결 리스트의 노드 구조체
    struct node* next;  // 다음 노드의 주소를 저장할 포인터
    int data;           // 데이터 저장
};

struct node* head = NULL;   // 머리노드 생성, NULL


void in(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));   // 새 노드 생성
    newnode->data = data;

    struct node* ptr = head;

    if (head == NULL) {    // 첫번째 데이터
        head = newnode;
        newnode->next = newnode;
    }
    else {
        while (ptr->next != NULL && ptr->next != head)  // ptr은 head 이전
            ptr = ptr->next;                            

        newnode->next = head;   // 새 노드의 next는 head
        ptr->next = newnode;    // ptr(head이전)의 next는 newnode
    }
}

void out(struct node* ptr) {    
    printf("%d", ptr->data);
    struct node* newptr = head; 

    if (head->data == ptr->data && head->next == head) { // 노드가 비어있을 때
        head = NULL;
        return;
    }

    while (newptr->next->data != ptr->data) // ptr은 삭제할 노드, newptr은 그 전 노드
        newptr = newptr->next;              
    
    if (head->data == ptr->data)    // head를 삭제할 노드의 다음으로 옮김
        head = ptr->next;

    newptr->next = ptr->next;   // 삭제할 노드를 건너뛰고 연결
    free(ptr);
}

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        in(i);
    }
    int check = 0;
    int once = 1;
    struct node* cur = head;

    printf("<");
    while (head != NULL) {
        check++;
        if (check % k == 0 && check != 0) {
            if (once != 1) {
                printf(", ");
            }
            else once = 0;

            struct node* ptr = cur;
            cur = cur->next;
            out(ptr);
        }
        else {
            cur = cur->next;
        }
    }
    printf(">");
}