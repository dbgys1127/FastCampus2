/*
C++에서 제공하는 기본 데이터형에 대한 요약
						┌ short int : -32,768 ~ 32,767 (signed short)
			┌ short int	┼
			│			└ unsigned int: 0 ~ 65,535 (unsigned short)
int(4Byte)	┼
			│			┌ long : -2,147,483,648 ~ 2,147,483,647(signed long, long int)
			└ long int	┼
						└ unsigned long: 0 ~ 4,294,967,295(unsigned long int, unsigned int)


		┌ float(4Byte)	: 1.17549e-38 ~ 3.40282e+38
		┼
		└ doule(8Byte)	: 2.22507e-308 ~ 1.79769e+308


			┌ signed char	: -128 ~ 127 (char와 같은 의미로 사용)
char(1Byte)	┼
			└ unsigned char	: 0 ~ 255
*/

/*-----------------------------------------------------------------------------
 * Name: 005_Data04
 * DESC: char, numeric_limits, CHAR_MAX, CHAR_MIN
 * numeric_limits을 이용하여 표현 가능한 범위를 확인 가능
-----------------------------------------------------------------------------*/
#include <iostream>

int main()
{
	char ch = 'A';
	std::cout << "char: " << ch << std::endl;

	{
		std::cout << "=== char에 대한 세부 정보 보기 ===" << std::endl;

		std::cout << "char size: " << sizeof(char) << std::endl;

		int Max = std::numeric_limits<char>::max();
		int Min = std::numeric_limits<char>::min();
		std::cout << "char max : " << Max << "\t min : " << Min << std::endl;
		std::cout << "CHAR_MAX : " << CHAR_MAX << "\t CHAR_MIN : " << CHAR_MIN << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "=== 데이터형에 최대 최소값에 따른 오류 ===" << std::endl;

		char min = CHAR_MIN - 1;
		char max = CHAR_MAX + 1;

		std::cout << "min: " << (int)min << "  max: " << (int)max << std::endl;
		std::cout << "min: " << min << "  max: " << max << std::endl;
	}

	return 0;
}

/*
char: A
=== char에 대한 세부 정보 보기 ===
char size: 1
char max : 127   min : -128
CHAR_MAX : 127   CHAR_MIN : -128

=== 데이터형에 최대 최소값에 따른 오류 ===
min: 127  max: -128
min:   max: ?
*/