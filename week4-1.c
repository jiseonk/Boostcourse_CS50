#include <stdio.h>

void bubbleSort(int arr[]);
void compare(int arr[], int arr2[]);

int main(void){

    int i;
    int arr[5] = {1,2,3,4,5};
    int arr2[5] = {5,4,3,2,1};
    //int arr[5] = {1,4,2,5,8};
    //int arr2[5] = {2,5,4,3,1};

    //정렬하기
    bubbleSort(arr);
    bubbleSort(arr2);

    
    //배열 확인
    for(i=0;i<5;i++){
        printf("%d\n", arr2[i]);
    }

    //배열 비교하기
    compare(arr, arr2);

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

 

void compare(int arr[], int arr2[]){
    int i;
    for(i=0; i<5; i++){
        if(arr[i]!=arr2[i]){
            printf("False");
            break; 
        }else if(i==4){
            printf("True");
            break;
        }
    }
}

