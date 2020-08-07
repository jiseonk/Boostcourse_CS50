#include <stdio.h>

void calcEven(int arr[], int num);

int main(void){

    int arr[4] = {1,2,5,10};
    int num = sizeof(arr)/sizeof(arr[0]);

    calcEven(arr, num);
    
}

void calcEven(int arr[], int num){

    for(int i=0; i<num/2; i++){
        printf("%d %d\n", arr[2*i], arr[2*i+1]);
        if(i==(num/2-1)) break;
        printf("%d\n", arr[2*i]);
    }

     for(int i=0; i<num/2; i++){
        if(i==(num/2-1)) break;
        printf("%d\n", arr[2*i+1]);
        printf("%d %d\n", arr[2*i], arr[2*i+1]);
    }
}
