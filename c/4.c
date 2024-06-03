/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int grade;
    scanf("%d",&grade);
    if (90<=grade && grade<=100){
        printf("A");
    }
    else if (80<=grade && grade<90){
        printf("B");
    }
    else if (70<=grade && grade<80){
        printf("C");
    }
    else if (60<=grade && grade<70){
        printf("D");
    }
    else if (grade<60){
        printf("F");
    }

    return 0;
}