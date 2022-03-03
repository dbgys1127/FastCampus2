/*-----------------------------------------------------------------------------
 * Name: Operators6 - ��Ʈ ������(bitwise operator)
 * DESC: ������(&, |, ^, ~, <<, >>) - �� �����ڿ� �����ؼ� ���
 * ���� Ȥ�� ������ ��ȯ ������ Ÿ�Ը� ����
 * 2������ ����(�ּ� ������ 0, 1�� ǥ��)
 * �޸� ȿ���� ���, ���� ���� �ӵ�, ��Ʈ��ũ���� ���� ���
 * bool�� �����Ϳ� ����ϴ� ��� ȿ���� ���
-----------------------------------------------------------------------------*/

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	unsigned char x = 5; //0000 0101
	unsigned char y = 1; //0000 0001

	cout << "x: " << (int)x << " =>  2����:" << bitset<8>(x) << endl;

	unsigned int result = 0;
	result = x & y;
	cout << "x & y = 10����: " << (int)result << " =>  2����:" << bitset<8>(result) << endl;

	result = x | y;
	cout << "x | y = 10����: " << (int)result << " =>  2����:" << bitset<8>(result) << endl;

	result = x ^ y;
	cout << "x ^ y = 10����: " << (int)result << " =>  2����:" << bitset<8>(result) << endl;

	result = ~x;
	cout << "~x = 10����: " << (int)result << " =>  2����:" << bitset<8>(result) << endl;

	result = ~y;
	cout << "~y = 10����: " << (int)result << " =>  2����:" << bitset<8>(result) << endl;

	result = x >> 1; //1��Ʈ�� ���������� �̵��ϴ� ��� 2�辿 ����
	cout << "x >> 1 = 10����: " << (int)result << " =>  2����:" << bitset<8>(result) << endl;

	result = x << 1; //1��Ʈ�� �������� �̵��ϴ� ��� 2�辿 ����
	cout << "x << 1 = 10����: " << (int)result << " =>  2����:" << bitset<8>(result) << endl;

	return 0;
}

//��Ʈ ������
//&: ��Ʈ AND���� 
//|: ��Ʈ OR���� 
//^: ��Ʈ XOR���� - �� ��Ʈ�� ���� �ٸ��� 1, ������ 0
//~: ��Ʈ NOT���� - ��Ʈ�� 1�̸� 0����, 0�̸� 1��
//<<, >>: ��Ʈ Shift���� -������ ����ŭ ����, ���������� ��Ʈ �̵�

//���������������������������������������������������������� 
//��  X  ��0000 0101 �� 0000 1010��	
//���������������������������������������������������������� 
//��  Y  ��0000 0001 �� 0000 1111��
//����������������������������������������������������������
//��X & B|0000 0001 �� 0000 1010��
//���������������������������������������������������������� 

//���������������������������������������������������������� 
//��  X  ��0000 0101 �� 0000 1010��	
//���������������������������������������������������������� 
//��  Y  ��0000 0001 �� 0000 1111��
//����������������������������������������������������������
//��X | B��0000 0101 �� 0000 1111��
//���������������������������������������������������������� 

//���������������������������������������������������������� 
//��  X  ��0000 0101 �� 0000 1010��	
//���������������������������������������������������������� 
//��  Y  ��0000 0001 �� 0000 1111��
//����������������������������������������������������������
//��X ^ B��0000 0100 �� 0000 0101��
//���������������������������������������������������������� 

//���������������������������������������������������������� 
//��  X  ��0000 0101 �� 0000 1010��	
//���������������������������������������������������������� 
//�� ~X  ��1111 1010 �� 1111 0101��
//����������������������������������������������������������
//��  Y  ��0000 0001 �� 0000 1111��
//����������������������������������������������������������
//�� ~Y  ��1111 1110 �� 1111 0000��
//���������������������������������������������������������� 

//���������������������������������������������������������� 
//��  X  ��0000 0101 �� 0000 1010��	
//����������������������������������������������������������
//�� X>>1��0000 0010 �� 0000 0101��
//����������������������������������������������������������
//��  X  ��0000 0101 �� 0000 1010��
//����������������������������������������������������������
//�� X<<1��0000 1010 �� 0001 0100��
//����������������������������������������������������������  