#include <stdio.h>

void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로
	// 수행하는 명령문입니다.

#pragma endregion

#pragma region 증감 연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때
	// 사용하는 연산자입니다.
//	char character = 0;
//
//	int integer = ++character;
//
//	printf("integer: %d\n", integer);
//
//	printf("character: %d\n", character);
//
//	integer = --character;
//
//	printf("integer : %d\n", integer);
//
//	printf("character : %d\n", character);


		// 전위 증감 연산자는 변수의 값을 증감시킨 후에 
		// 연산을 수생합니다.

	// ***** 띄어쓰기가 이상하다 싶으면 insert 다시 누르기

//	int character = 0;
//
//	int integer = character++;
//
//	printf("integer : %d\n", integer);
//	printf("character : %d\n", character);
//
//	integer = character--;
//
//	printf("integer : %d\n", integer);
//	printf("character : %d\n", character);






#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한
	// 횟수만큼 반복하는 반복문입니다.
	// for문은 (초기식; 조건식; 증감식) { 반복할 내용 }
	// 으로 이루어져 있습니다.
	// 초기식은 변수 지정, 조건식은 정한 변수에 조건을 달고, 그 다음 증감식은 변수의 앞 뒤에
	// ++ 과 --를 이용하여 지정합니다.
	// 마지막으로 반복할 내용엔 printf를 이용해서 반복문의 끝에 출력할 내용을 지정합니다.

//	for(int x = 0; x < 5; x++)
//	{
//		printf("end\n");
//	}
//
// 반복문이 동작되는 순서는 초기화 -> 조건 검사 -> 증감의 구조로 동작합니다.

#pragma endregion

#pragma region while문
	// 특정한 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문입니다.

//	int count = 1;
//
//	while (count <= 5)
//	{   // while문은 증감식을 무조건 반복할 내용 다음에 적어야한다
//		// 만약 while () 안에 적고 실행하면 숫자값이 무한대로 증가한다.
//
//		printf("count : % d\n", count);
//
//		count++;
//	}
	// 반복문은 순차적으로 실행하면서 조건 분기(Branch)를 만나게 되면, 어느 쪽으로
	// 실행 흐름이 갈지 미리 예측(branch prediction)합니다.

#pragma endregion

#pragma region do-while문 
	// 많이 사용하지 않는 명령문
	// 조건과 상관없이 한 번의 작업을 수행한 다음 조건에 따라
	// 명령문을 실행하는 반복문입니다.

//	int connect = 0;
//
//	do
//	{
//		printf("lie\n");
//	} while (connect > 1);


#pragma endregion

#pragma region continue문
// 해당 조건문만 실행하지 않고, 반복문은 이어서
// 실행하는 제어문입니다.

int x = 0;

for (int x = 1; x < 11; x++)
{
	if (x = 3, 6, 9)
	continue;

	printf("again");
}


#pragma endregion

#pragma region

#pragma endregion

#pragma region

#pragma endregion

}