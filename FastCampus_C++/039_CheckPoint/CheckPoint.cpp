/*-----------------------------------------------------------------------------
 * Name: 039_CheckPoint
 * DESC: ������ �迭 ������ ���
 * ���� �ݺ����� �ִ� ��(030_Loop03)�� ���� �����͸� �����ϴ� ������ ����ϱ�
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    const int COL = 8;
    const int ROW = 9;

    //1: �迭�� ������ ����� ����
    int arrResult[COL][ROW]; //72���� ������ ����� ����..
    int selectCol = 0;
    
    //72���� ������ ����� ����..
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            arrResult[i][j] = (i + 2) * (j + 1);
        }
    }

    //2: ����� �����͸� ������� ȭ�� ���
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "  " << (j + 2) << " X " << (i + 1) << "= " << arrResult[j][i];
        }
        cout << endl;
    }

    //3: ���ϴ� ������ ����� ���� ���..
    cout << endl << "�� ���� �����帱���? ";
    cin >> selectCol;

    //�迭�� �ε����� 0���� ���۵˴ϴ�. �ٽ� �ε��� ���
    selectCol -= 2;

    for (int i = 0; i < ROW; i++)
    {
        cout << "  " << (selectCol + 2) << " X " << (i + 1) << "= " << arrResult[selectCol][i] << endl;
    }

    return 0;
}

/*

  2 X 1= 2  3 X 1= 3  4 X 1= 4  5 X 1= 5  6 X 1= 6  7 X 1= 7  8 X 1= 8  9 X 1= 9
  2 X 2= 4  3 X 2= 6  4 X 2= 8  5 X 2= 10  6 X 2= 12  7 X 2= 14  8 X 2= 16  9 X 2= 18
  2 X 3= 6  3 X 3= 9  4 X 3= 12  5 X 3= 15  6 X 3= 18  7 X 3= 21  8 X 3= 24  9 X 3= 27
  2 X 4= 8  3 X 4= 12  4 X 4= 16  5 X 4= 20  6 X 4= 24  7 X 4= 28  8 X 4= 32  9 X 4= 36
  2 X 5= 10  3 X 5= 15  4 X 5= 20  5 X 5= 25  6 X 5= 30  7 X 5= 35  8 X 5= 40  9 X 5= 45
  2 X 6= 12  3 X 6= 18  4 X 6= 24  5 X 6= 30  6 X 6= 36  7 X 6= 42  8 X 6= 48  9 X 6= 54
  2 X 7= 14  3 X 7= 21  4 X 7= 28  5 X 7= 35  6 X 7= 42  7 X 7= 49  8 X 7= 56  9 X 7= 63
  2 X 8= 16  3 X 8= 24  4 X 8= 32  5 X 8= 40  6 X 8= 48  7 X 8= 56  8 X 8= 64  9 X 8= 72
  2 X 9= 18  3 X 9= 27  4 X 9= 36  5 X 9= 45  6 X 9= 54  7 X 9= 63  8 X 9= 72  9 X 9= 81

�� ���� �����帱���? 2
  2 X 1= 2
  2 X 2= 4
  2 X 3= 6
  2 X 4= 8
  2 X 5= 10
  2 X 6= 12
  2 X 7= 14
  2 X 8= 16
  2 X 9= 18

*/