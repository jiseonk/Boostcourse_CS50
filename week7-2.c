#include <stdio.h>
#include <stdlib.h>

int *divisor;
int compare(const void * a, const void * b);
int findNum(int N);

int main()
{
    int N;
    printf("진짜 약수의 개수 : ");
    scanf("%d", &N);
    
    divisor = malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++){
        int tmp;
        printf("i : ");
        scanf("%d", &tmp);
        divisor[i] = tmp;
    }

    qsort(divisor, N, sizeof(int), compare);

    printf("정답은 %d\n", findNum(N));

    return 0;
}

int compare(const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}

int findNum(int N)
{
    int answer;
    if(N%2==0){
        return answer = divisor[0] * divisor[N-1];
    }else{
        int center = N/2;
        return answer = divisor[center]*divisor[center];
    }
}
