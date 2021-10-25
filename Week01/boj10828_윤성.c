#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int stack_container[10032];
    int stack_ptr;
}IntStack;

void stackInit(IntStack *s){
    s->stack_ptr = 0 ;
}   

void push(IntStack* s, int x){
    s->stack_container[s->stack_ptr++] = x;
}

// 만약 비어 있다면 -1 출력
int isEmpty(IntStack *s){
    if(s->stack_ptr == 0)
        return 1;
    else
        return 0;
}

int pop(IntStack *s){
    int ret ;
    if(isEmpty(s)==1){
        return -1;
    }
    ret = s->stack_container[--s->stack_ptr];
    return ret; 
}

int size(IntStack *s){
    return s->stack_ptr;
}

int top(IntStack *s){
    if(isEmpty(s)==1){
        return -1;
    }
    return s->stack_container[s->stack_ptr-1];
}

int main(){
    IntStack* s = malloc(sizeof(IntStack));
    int commandAmount;
    int i = 0;
    scanf("%d", &commandAmount);
    stackInit(s);

    for(i=0; i<commandAmount; i++){
        char tempString[14];
        scanf("%s", &tempString);
        if (strncmp(tempString, "pop", 3)==0)
        {
            printf("%d\n", pop(s));
        }
        else if (strncmp(tempString, "size", 4)==0)
        {
            printf("%d\n", size(s));
        }
        else if (strncmp(tempString, "empty", 5)==0)
        {
            printf("%d\n", isEmpty(s));
        }
        else if (strncmp(tempString, "top", 3)==0)
        {
            printf("%d\n", top(s));
        }
        else if (strncmp(tempString, "push", 4)==0)
        {
            int temp;
            scanf("%d", &temp);
            push(s, temp);
        }
    }
    free(s);
    return 0;
}