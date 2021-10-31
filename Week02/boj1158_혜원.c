#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// �������Ḯ��Ʈ https://sewo.tistory.com/24?category=669086


struct node {           // ���� ����Ʈ�� ��� ����ü
    struct node* next;  // ���� ����� �ּҸ� ������ ������
    int data;           // ������ ����
};

struct node* head = NULL;   // �Ӹ���� ����, NULL


void in(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));   // �� ��� ����
    newnode->data = data;

    struct node* ptr = head;

    if (head == NULL) {    // ù��° ������
        head = newnode;
        newnode->next = newnode;
    }
    else {
        while (ptr->next != NULL && ptr->next != head)  // ptr�� head ����
            ptr = ptr->next;                            

        newnode->next = head;   // �� ����� next�� head
        ptr->next = newnode;    // ptr(head����)�� next�� newnode
    }
}

void out(struct node* ptr) {    
    printf("%d", ptr->data);
    struct node* newptr = head; 

    if (head->data == ptr->data && head->next == head) { // ��尡 ������� ��
        head = NULL;
        return;
    }

    while (newptr->next->data != ptr->data) // ptr�� ������ ���, newptr�� �� �� ���
        newptr = newptr->next;              
    
    if (head->data == ptr->data)    // head�� ������ ����� �������� �ű�
        head = ptr->next;

    newptr->next = ptr->next;   // ������ ��带 �ǳʶٰ� ����
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