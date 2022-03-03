/*-----------------------------------------------------------------------------
 * Name: 025_Branch03
 * DESC: ���ǹ�(if ~ else if ~ else)
 * �ڵ� �ڵ� �ϼ�(Code Snippet): Ű���� + tab
 * ���ǽ��� �̿��Ͽ� ���α׷��� �帧�� ����
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    int num = 100;

    if (num > 100)
    {
        cout << "num�� 100���� ũ��." << endl;
    }
    else if(num == 100)
    {
        cout << "num�� 100�̴�." << endl;
    }
    else
    {
        cout << "num�� 100���� �۴�." << endl;
    }

    cout << "num: " << num << endl;

    return 0;
}

/* Result
¦�� �Դϴ�.
num�� 100���� �۴�.
num: 100
*/

/*
            *
          *   *
        *       *    (else if)
       *  ����1   * ��� FALSE ����������������
        *       *                   ��
          *   *                     ��
            *                       *                                  
            ��                     *   *
            ��                   *       *     (else)
            ��                  *  ����2   * ��� FALSE ���� ������ ��� ���� ��������
            ��                   *       *                                 ��� 
            ��                     *   *                                   ��� 
            ��                       *                                     ��� 
            ��                      ���                                     ��� 
            ��                      ���                                     ��� 
           TRUE                   TRUE                                    ��� 
            ���                     ���                                     ��� 
            ���                     ���                                     ��� 
       ���� ��� ���� �������������������������������������������������������������������������������������������������������

*/


// if(���ǽ�1)
// {
//      ���ǽ�1�� TRUE(��) ����
// }
// else if(���ǽ�2)
// {
//      ���ǽ�2�� TRUE(��) ����
// }
// else
// {
//      ���ǽ�2�� FALSE(����) ����
// }