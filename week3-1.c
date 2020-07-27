#include <stdio.h>

int main(void)
{
    int i;
    float score;

    char* table[9] = {"A+","A","B+","B","C+","C","D+","D","F"};
    char table2[9] = {95,90,85,80,75,70,65,60,0};

    // 배열 출력
    for(i=0; i<9; i++){
        printf("%s\t", table[i]);
    }

    putchar('\n');

    for(i=0; i<9; i++){
        printf("%d\t", table2[i]);
    }

    putchar('\n');

    // 성적 입력
    printf("성적을 입력하세요 (0~100) : ");
    scanf("%f", &score);

    // 유효성 체크
    if(score>=95)
        printf("학점은 %s 입니다.\n", table[0]);
    else if (score<95 && score>=90)
        printf("학점은 %s 입니다.\n", table[1]);
    else if (score<90 && score>=85)
        printf("학점은 %s 입니다.\n", table[2]);
    else if(score<85 && score>=80)
        printf("학점은 %s 입니다.\n", table[3]);
    else if(score<80 && score>=75)
        printf("학점은 %s 입니다.\n", table[4]);
    else if(score<75 && score>=70)
        printf("학점은 %s 입니다.\n", table[5]);
    else if(score<70 && score>=65)
        printf("학점은 %s 입니다.\n", table[6]);
    else if(score<65 && score>=60)
        printf("학점은 %s 입니다.\n", table[7]);
    else if(score<60)
        printf("학점은 %s 입니다.\n", table[8]);
    else
        printf("**성적을 올바르게 입력하세요. 범위는 0~100 입니다.\n");
}
