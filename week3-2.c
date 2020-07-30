#include <stdio.h>
#define SIZE 500000

int findNumber(int n, int partArr[], int lengthOfPartArr);

int main(int argc, char* argv[])
{
    int n,i;
    char *mode = "r";

    printf("숫자의 개수를 입력하세요.: "); 
    scanf("%d", &n);
    //printf("%d\n", n);

    // 1부터 N의 숫자중 K가 빠진 배열
    int partArr[SIZE];
    int lengthOfPartArr = n-1;

    //argv[] 출력이나 해보자..
    //printf("%s", argv[1]);
    
    // 파일 불러오기
    FILE *fp;
    fp = fopen(argv[1], mode);
    if(fp==NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    for(i=0; i<=lengthOfPartArr; i++){
        fscanf(fp, "%d", &partArr[i]);
    }

    /* 배열 확인
    for(i=0; i<=lengthOfPartArr; i++){
        printf("%d\n", partArr[i]);
    } */

    // K 구하기
    printf("K = %d\n", findNumber(n, partArr,lengthOfPartArr));

    fclose(fp);

}

int findNumber(int n, int partArr[], int lengthOfPartArr)
{
    int i, K;
    int sumOfArr = 0;
    int sumOfNum = n*(n+1)/2;

    for(i=1; i<=lengthOfPartArr; i++){
        sumOfArr += partArr[i];
        //printf("%d\n", sumOfArr);
    }

    K = sumOfNum - sumOfArr;

    return K;
}
