/*-----------------------------------------------------------------------------
 * Name: 023_Branch01
 * DESC: 조건문(if)
 * 조건식을 이용하여 프로그램의 흐름을 제어
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    int num = 100;

    if (num % 2 == 0)
    {
        cout << "짝수 입니다." << endl;
    }

    if (num > 100)
    {
        cout << "num은 100보다 크다." << endl;
    }

    cout << "num: " << num << endl;

    return 0;
}

/* Result
짝수 입니다.
num: 100
*/

//            *
//          *   *
//        *       *
//      *    조건   *  FALSE(거짓)───────┐
//        *       *                     ↓↓
//          *   *                       ↓↓
//            *                         ↓↓
//           TRUE(참)                   ↓↓
//            ↓↓                        ↓↓
//            ↓↓                        ↓↓
//      "참인 경우 실행" ────────────────────────────────────→→→→→→→→→→→→→→→→→→

// if(조건식)
// {
//      조건식이 TRUE(참) 실행
// }