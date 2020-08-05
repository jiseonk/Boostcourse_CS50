#include <stdio.h>

void bubbleSort(int arr[]);
void calcOdd(int arr[], int num);
void calcEven(int arr[], int num);

int main(void){
    //int arr[5] = {1,2,3,4,5};
    int arr[4] = {2,4,4,4};
    int num = sizeof(arr)/sizeof(arr[0]);

    //check number
    //printf("%d\n", num);

    // 오름차순으로 정렬
    bubbleSort(arr);

    // 최단거리 구하기
    if(num%2)
        calcOdd(arr,num);
    else
        calcEven(arr,num);

    return 0;
}

void calcOdd(int arr[], int num){
    int mid = num/2;
    printf("%d\n", arr[mid]);
}

void calcEven(int arr[], int num){
    int mid = (num-1)/2;
    printf("%d\n", arr[mid]);
}

 void bubbleSort(int arr[]){
    int i, j, temp;
    for(i=0; i<5; i++){
        for(j=0; j<5-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                }
            }
        }
}

