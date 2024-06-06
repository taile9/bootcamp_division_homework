/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int a ,b,one=0,two=0,three=0;
    scanf("%d",&a);
    one=a/100;
    a=a-one*100;
    two=a/10;
    a=a-two*10;
    three=a;
    b=three*100+two*10+one;
    printf("%d",b);
    

    return 0;
}
// i 0
// a 