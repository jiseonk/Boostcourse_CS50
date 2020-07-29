#include <stdio.h>

const int NUMBER = 9;
const char* GRADES[NUMBER] = {"A+","A","B+","B","C+","C","D+","D","F"};  
const int SCORES[NUMBER] = {95,90,85,80,75,70,65,60,0};

void calculateScore(float stu_score, const char* GRADES[], const int SCORES[],const int length);

int main(void)
{
    int i;
    float stu_score;

	  printf("학점 프로그램\n종료를 원하면 \"-1\" 을 입력\n\n");

    // 성적 테이블 출력
    printf("[학점 테이블]\n");
    printf("학점 : ");
    for(i=0; i<NUMBER; i++){
        printf("%s\t", GRADES[i]);
    }
    putchar('\n');
    
    printf("점수 : ");
    for(i=0; i<NUMBER; i++){
        printf("%d\t", SCORES[i]);
    }
    putchar('\n');

    //성적 계산하기
    while(1){
        printf("성적을 입력하세요 (0~100) : ");
        scanf("%f", &stu_score);
        if(stu_score!=EOF)
            calculateScore(stu_score, GRADES, SCORES, NUMBER);
        else {
            printf("학점 프로그램을 종료합니다.\n");
            break;
        }
    }

}

void calculateScore(float stu_score, const char* GRADES[], const int SCORES[], const int length)
{
    int j;

    if(stu_score>=0 && stu_score<=100){
        for(j=0;j<length;j++){ 
            if(stu_score>= SCORES[j]){
                printf("학점은 %s 입니다.\n", GRADES[j]);
                break;
            }
        }
    }        
    else
        printf("**성적을 올바르게 입력하세요. 범위는 0~100 입니다.\n");
}
