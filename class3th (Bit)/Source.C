#include <stdio.h>


void main()
{
#pragma region 산술 연산자

	//int HP = 1;

	//int X = 10;
	//int Y = 5;
	//int G = 3;
	//int B = 6;

	//// 1. 변수 = 변수 + 변수

	//HP = X + Y;

	//printf("HP : %d\n", HP);


	//// 2, 변수 = 변수 - 리터럴 상수

	//// 3. 변수 = 변수 + 심솔릭 상수

	//// 4. 변수 = 리터럴 상수 / 리터럴 상수

	//// 5. 변수 = 심볼릭 상수 % 리터럴 상수



#pragma endregion

#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의
	// 조합으로 논리 계산을 수행하는 단위입니다.

	//pragma region의 뒤에 숫자를 쓰려면 ()로 감싸야 오류가 안 생깁니다.

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	//나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

	// ex) 23 = 10111(2) 


#pragma endregion
#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.
	//각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
	//다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.


#pragma endregion
#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 단위입니다.

#pragma region AND 연산자
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.
	// AND 연산자는 &를 사용해야한다.

	// int wisdom = 10; // 0000 1010
	// int dexterity = 6; // 0000 0110
	// 
	// 
	// printf("wisdom & dexterity : %d\n", wisdom & dexterity);


#pragma region or 연산자
	// or 연산자의 기호는 흔히 쓰는 줄바꿈의 기호를 시프트와 같이 쓰면 나오는 기호이다.

	int poison = 8;  // 0000 1000
	int freeze = 12; // 0000 1100
	// ------------
	// 0000 1100
	printf("poison & freeze : %d\n", poison | freeze);
#pragma endregion

#pragma region XOR 연산자
	// 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면
	// 1을 반환하는 연산자입니다.
	// xor 연산자의 기호는 숫자 6을 시프트 하고 나온 기호이다.

	int idle = 15;  // 0000 1111
	int battle = 6; // 0000 0110
	// ----------
	// 0000 1001

	printf("idle ^ battle : %d\n", idle ^ battle);


#pragma endregion
#pragma region NOT 연산자
	// 하나의 비트를 반전시키는 연산자입니다.
	// NOT 연산자의 기호는 물결무늬인 ~ 이다. `를 시프트와 동시에 누르면 나오는 기호다.
	int status = 13; // 0000 1101
	// ---------
	// 1111 0010
// NOT 연산자의 기호는 정한 변수의 이름 바로 앞에 (예시 : ~변수) 사용해야 실행할 때 제대로 된 값이 나온다.)
	printf("~status : %d\n", ~status);

	// 첫 번째 비트는 부호를 나타내며, 첫 번째 비트에
	// 1이 있다면 값은 음수가 됩니다.
	// 즉 13은 NOT 연산자를 쓰게 되면 첫 번째 비트에 1이 있으니 음수로 변하게 됩니다.


#pragma endregion

#pragma region 시프트 연산자
	//  비트를 특정한 위치로 정해진 수만큼 이동시키는 연산자입니다.
	// 시프트 연산자의 기호는 <<이다.

	// int packet = 5; // 0000 0101
	//                 // 왼쪽 2칸 이동
	//                 // 0000 1010
	//                 // 0001 0100
	// 
	// printf("packet 변수를 왼쪽으로 2칸 이동한 결과 : %d\n", packet << 2);
	// 
	// printf("packet 변수를 오른쪽으로 1칸 이동한 결과 : %d\n", packet >> 1);



#pragma endregion


#pragma endregion

#pragma endregion



}