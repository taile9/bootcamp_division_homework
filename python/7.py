"""
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
"""

def main():
    a=int(input())
    b=int(input())
    if a%4==0 and a%100!=0 or a%400==0 :
        if b==2 :
            print('29')
        elif b==4 or b==6 or b==9 or b==11 :
            print('30')
        elif b==1 or b==3 or b==5 or b==7 or b==8 or b==10 :
            print('31')
    else :
        if b==2 :
            print('28')
        elif b==4 or b==6 or b==9 or b==11 :
            print('30')
        elif b==1 or b==3 or b==5 or b==7 or b==8 or b==10 :
            print('31')


    return


if __name__ == '__main__':
    main()
