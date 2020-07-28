#include <stdio.h>

const int NUMBER = 9;
const char* GRADES[NUMBER] = {"A+","A","B+","B","C+","C","D+","D","F"};  
const int SCORES[NUMBER] = {95,90,85,80,75,70,65,60,0};

void calculateScore(float stu_score, const char* GRADES[], const int length);

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
            calculateScore(stu_score, GRADES, NUMBER);
        else{
            printf("학점 프로그램을 종료합니다.\n")
            break;
				}
    }

}

void calculateScore(float stu_score, const char* GRADES[], const int length)
{
    if(stu_score>=95 && stu_score<=100)
        printf("학점은 %s 입니다.\n", GRADES[0]);
    else if (stu_score<95 && stu_score>=90)
        printf("학점은 %s 입니다.\n", GRADES[1]);
    else if (stu_score<90 && stu_score>=85)
        printf("학점은 %s 입니다.\n", GRADES[2]);
    else if(stu_score<85 && stu_score>=80)
        printf("학점은 %s 입니다.\n", GRADES[3]);
    else if(stu_score<80 && stu_score>=75)
        printf("학점은 %s 입니다.\n", GRADES[4]);
    else if(stu_score<75 && stu_score>=70)
        printf("학점은 %s 입니다.\n", GRADES[5]);
    else if(stu_score<70 && stu_score>=65)
        printf("학점은 %s 입니다.\n", GRADES[6]);
    else if(stu_score<65 && stu_score>=60)
        printf("학점은 %s 입니다.\n", GRADES[7]);
    else if(stu_score<60 && stu_score>=0)
        printf("학점은 %s 입니다.\n", GRADES[8]);
    else
        printf("**성적을 올바르게 입력하세요. 범위는 0~100 입니다.\n");
}
