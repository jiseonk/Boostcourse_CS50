#include <stdio.h>

void calcOdd(int arr[], int num);

int main(void){
    int arr[5] = {1,2,3,4,5};
    int num = sizeof(arr)/sizeof(arr[0]);

    if(num%2)
        calcOdd();
    else
        calcEven();

    return 0;
}

void calcOdd(int arr[], int num){
    int mid = (num+1)/2;
    printf("%d\n", arr[mid]);
}

void calcEven(int arr[], int num){
    int mid = num/2;
    printf("%d\n", arr[mid]);
}

