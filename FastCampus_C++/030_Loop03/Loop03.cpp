/*-----------------------------------------------------------------------------
 * Name: 030_Loop03
 * DESC: 반복문(for)
 * 반복문을 이용하여 프로그램의 흐름제어 및 반복적인 Process 처리
 * 배열과 for문
 * 향상된 for문
 * 중첩 for문(2, 3, ...)
 * 프로그램에서 가장 많이 사용되는 키워드
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    {
        for (int num = 0; num <= 5; num++)
        {
            cout << "num: " << num << endl;
        }

        //조건(num <= 5) false인 경우 여기로..
    }

    { //구구단..
        for (int i = 2; i < 10; i++)
        {
            for (int j = 1; j < 10; j++)
            {
                cout << " " << i << "X" << j << "= " << (i * j);
            }
            cout << endl;
        }
    }
}


/* Result
num: 0
num: 1
num: 2
num: 3
num: 4
num: 5
 2X1= 2 2X2= 4 2X3= 6 2X4= 8 2X5= 10 2X6= 12 2X7= 14 2X8= 16 2X9= 18
 3X1= 3 3X2= 6 3X3= 9 3X4= 12 3X5= 15 3X6= 18 3X7= 21 3X8= 24 3X9= 27
 4X1= 4 4X2= 8 4X3= 12 4X4= 16 4X5= 20 4X6= 24 4X7= 28 4X8= 32 4X9= 36
 5X1= 5 5X2= 10 5X3= 15 5X4= 20 5X5= 25 5X6= 30 5X7= 35 5X8= 40 5X9= 45
 6X1= 6 6X2= 12 6X3= 18 6X4= 24 6X5= 30 6X6= 36 6X7= 42 6X8= 48 6X9= 54
 7X1= 7 7X2= 14 7X3= 21 7X4= 28 7X5= 35 7X6= 42 7X7= 49 7X8= 56 7X9= 63
 8X1= 8 8X2= 16 8X3= 24 8X4= 32 8X5= 40 8X6= 48 8X7= 56 8X8= 64 8X9= 72
 9X1= 9 9X2= 18 9X3= 27 9X4= 36 9X5= 45 9X6= 54 9X7= 63 9X8= 72 9X9= 81
*/


/*
           do
            ↓
            ↓
        "무조건 실행"
            ↓
            ↓
         (while(조건식));
             *                                       
          *     *                                       
        *         *     (else)                          
   →→ *    조건    *  →→ FALSE  "거짓인 경우 실행" ──┐
   ↑↑   *        *                                  ↓↓
   ↑↑     *    *                                    ↓↓
   ↑↑       *                                      ↓↓
   ↑↑       ↓                                     ↓↓
   ↑↑       ↓                                     ↓↓
   ↑↑     TRUE                                     ↓↓
   ↑↑      ↓↓                                     ↓↓
   ↑↑      ↓↓                                     ↓↓
    ←← "참인 경우 실행" ────────────────────────────────→→→→→→→→→→→→→→→→→→

*/

/*
do{
    "실행되는 Process"
}while(조건식);

주의: 조건식이 반드시 false인 상황(반복 종료)되는 것에 주의
만약, 종료되는 구간이 없다면 무한루프가 된다.

int num = 0;    //1: 초기식
while(num < 3)  //2: 조건식
{
    num++;      //3: 증감식
    ...
}

==> for문으로 변환
for(int num = 0; num < 3; num++)  for(1: 초기식; 2: 조건식; 3: 증감식)
{
    ...
}

*/