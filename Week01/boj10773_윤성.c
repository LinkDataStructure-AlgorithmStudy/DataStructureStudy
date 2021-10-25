#include <stdio.h>
#include <stdlib.h>

/*
  문제에 정수가 "0"일 경우에 지울 수 있는 수가 있음을 보장할 수 있다. 라는 문장이 있으므로
  overflow에 대한 걱정은 안해도 됨.
  따라서, push 와 pop 으로만 구현 가능.
  문제 10828에서 작성한 코드 일부 재사용, 수정
*/

typedef struct {
    int *stack_container;
    int stack_ptr;
}IntStack;

int isEmpty(IntStack *s){
    if(s->stack_ptr == 0)
        return 1;
    else
        return 0;
}

void stackInit(IntStack *s, int size){
    s->stack_ptr = 0 ;
    s->stack_container = calloc(size, sizeof(int));
}   

void push(IntStack* s, int x){
    s->stack_container[s->stack_ptr++] = x;
}

int pop(IntStack *s){
    int ret ;
    if(isEmpty(s)==1){
        return -1;
    }
    ret = s->stack_container[--s->stack_ptr];
    return ret; 
}

// 할당을 반드시 해제 해주어야 메모리 누수가 안 남.
void deleteContainerAllocate(IntStack* s){
    free(s->stack_container);
}
int main()
{
	int k,i,sum = 0;
    int stk_size ;
    IntStack s;

    scanf("%d", &k);
    stackInit(&s, k);

    for(i=0; i<k; i++){
        int temp;
        scanf("%d", &temp);
        if(temp==0)
            pop(&s);
        else
            push(&s, temp);
    }
    
    while (1)
    {
        int pop_temp = pop(&s);
        if(pop_temp == -1)
            break;
        else
            sum += pop_temp;
    }
    
    printf("%d\n", sum);
    deleteContainerAllocate(&s);
	return 0 ;
}