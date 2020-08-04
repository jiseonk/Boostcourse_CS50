#include <stdio.h>

int main(void){
    int arr[5] = {1,2,3,4,5};
    int num = sizeof(arr)/sizeof(arr[0]);

    if(num%2)
        calcOdd();
    else
        calcEven();

    return 0;
}

