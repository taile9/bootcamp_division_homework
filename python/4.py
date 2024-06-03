"""
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
"""

def main():
    a=int(input())
    if 90<a<=100 :
        print('A')
    elif 80<=a<90 :
        print('B')
    elif 70<=a<80 :
        print('C')
    elif 60<=a<70 :
        print('D')
    elif a<60 :
        print('F')


    return


if __name__ == '__main__':
    main()
