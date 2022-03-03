 /*-----------------------------------------------------------------------------
  * Name: 031_Loop04
  * 숫자의 자리수에 수를 while문으로 구현하기
  -----------------------------------------------------------------------------*/
#include <iostream>

int main()
{
    int num = 12345;

    while(num != 0)
    {
        std::cout << "num: " << num % 10 << std::endl;
        num /= 10; //num = num / 10;
    }

    return 0;
}

/* Result
num: 5
num: 4
num: 3
num: 2
num: 1
*/



