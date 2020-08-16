// 연결리스트로 Stack 만들기
//isFull 함수가 없네?

#include <stdio.h>
#include <stdlib.h>

typedef struct stackNode {
    int data;
    struct stackNode* next;
} StackNode;

StackNode* createStackNode(int data);
int isEmpty(StackNode* root);
void push(StackNode** root, int data);
int pop(StackNode** root);
int peek(StackNode** root);

int main() {
    StackNode* root = NULL;

    // root에는 왜 주소연산자 붙이지? 미션1에서는 필요없었는데
    // 더블 포인터(포인터의 주솟값)
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    push(&root, 40);

    printf("%d pop from stack\n", pop(&root));
    printf("%d pop from stack\n", pop(&root));

    push(&root, 50);
    printf("%d peeked from stack\n", peek(&root));
    printf("%d pop from stack\n", pop(&root));
    printf("%d pop from stack\n", pop(&root));
    printf("%d pop from stack\n", pop(&root));
    return 0;
}

StackNode* createStackNode(int data) {
    StackNode* node = (StackNode*)malloc(sizeof(StackNode));
    node->data = data;
    node->next = NULL;
    return node;
}

int isEmpty(StackNode* root) {
    return !root;
}

void push(StackNode** root, int data) {
    // 이 부분을 구현해 주세요!
    StackNode* node = createStackNode(data);
    if((**root).next != NULL)
      node->next = (**root).next;
    (**root).next = node;
    printf("%d pushed to stack\n", data);
}

int pop(StackNode** root) {
    if (isEmpty(*root))
        return -9999;
    int popped = peek(root);
    // 이 부분을 구현해 주세요!
    return popped;
}

int peek(StackNode** root) {
    if (isEmpty(*root))
        return -9999;
    return (*root)->data;
}
