/*
    main �Լ� ���� ���븸 �������ּ���.
    ������ ���, �ڵ� ä�� ���α׷��� ����� �������� ���� ���ɼ��� �ֽ��ϴ�.
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