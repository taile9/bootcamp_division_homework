/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int n=0,i=0,sum=0;
    while(1){
        scanf("%d",&n);
        if (n>0){
            break;
        }
        else if (n<=0){
            printf("X\n");
        }
    }
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);

    return 0;
}