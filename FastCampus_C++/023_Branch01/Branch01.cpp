/*-----------------------------------------------------------------------------
 * Name: 023_Branch01
 * DESC: ���ǹ�(if)
 * ���ǽ��� �̿��Ͽ� ���α׷��� �帧�� ����
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    int num = 100;

    if (num % 2 == 0)
    {
        cout << "¦�� �Դϴ�." << endl;
    }

    if (num > 100)
    {
        cout << "num�� 100���� ũ��." << endl;
    }

    cout << "num: " << num << endl;

    return 0;
}

/* Result
¦�� �Դϴ�.
num: 100
*/

//            *
//          *   *
//        *       *
//      *    ����   *  FALSE(����)����������������
//        *       *                     ���
//          *   *                       ���
//            *                         ���
//           TRUE(��)                   ���
//            ���                        ���
//            ���                        ���
//      "���� ��� ����" �������������������������������������������������������������������������������������������

// if(���ǽ�)
// {
//      ���ǽ��� TRUE(��) ����
// }