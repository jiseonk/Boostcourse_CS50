// 배열로 Stack 만들기
// 스택은 가장 최근에 들어온 데이터가 먼저 나가는 것

#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int top;
    int capacity;
    int* array;
} Stack;


Stack* createStack(int capacity);
int isFull(Stack* stack);
int isEmpty(Stack* stack);
void push(Stack* stack, int item);
int pop(Stack* stack);
int peek(Stack* stack);

int main() {
    Stack* stack = createStack(100);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);

    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));

    push(stack, 50);
    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));
    return 0;
}

Stack* createStack(int capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity*sizeof(int));
    return stack;
}

int isFull(Stack* stack) {
    //뭘 리턴하는 거지? 참 거짓인듯
    return stack->top == stack->capacity-1;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, int item) {
    // Full이면 push함수 종료 (*리턴값은 void)
    if (isFull(stack))
        return; 
    //top을 1 증가 시키고 그 자리에 입력받은 변수 저장
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

int pop(Stack* stack) {
    //Empty이면 pop함수 종료
    if (isEmpty(stack))
        return 0;
    // 가장 위에 있는 요소를 tmp에 저장
    int tmp = peek(stack);
    //top을 1감소 시킴
    stack->top--;
    // 가장 위에 있는 요소 리턴
    return tmp;
}

// peek() : 스택이 비어있지 않으면 맨 위에 있는 요소를 반환(삭제x)
int peek(Stack* stack) {
    return stack->array[stack->top];
}
