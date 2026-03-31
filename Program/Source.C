#include <stdio.h>


// 함수는 주로 main 함수가 선언되기 전에 선언합니다.
// 함수 선언 방법: main 함수 선언 전에 함수 이름을 만듭니다.
void render(int life)
{
	for (int i = 5; i < life; i++)
	{
		printf("@");
	}

	printf("\n");
}
void swap(int* argument_x, int* argument_y)
{

	int temporary = *argument_x;

	*argument_x = *argument_y;

	*argument_x = temporary;


}

void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합입니다.
	// 함수 출력 방법: main 함수 안에서 함수의 이름을 호출하고 출력합니다.
//integer(); // ex) 함수의 이름();






#pragma endregion

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수입니다.

	// 하나의 함수에 서로 다른 자료형의 매개 변수를 함께
	// 정의할 수 있으며, 여러 개의 매개 변수를 생성할 수 있습니다.




#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값입니다.
	// 인수의 값을 교환하기 위해 사용하는 기호는 temporary입니다.
	// 그리고 temporary는 main 함수 안에서만 작용합니다.

//	int x = 10;
//	int y = 20;
//
//	swap(&x, &y);
//
//	// x와 y 값 바꾸는 방법
//	// temporary로 처음 적어놨던 y의 값을 기록해두고,
//	// y는 x의 값으로 바꿉니다.
//	// x는 x = y; 로 y 값으로 바꾸기엔, y는 
//	// y = x;로 x의 값 10으로 먼저 바뀌었기 때문에
//	// temporary에 저장했던 y값을 사용해야합니다.
//	// ex) x = temporary;
//
//	printf("x의 값 : %d\n", x);
//	printf("y의 값 : %d\n", y);

	// 인수의 경우 함수에 있는 매개 변수에 따라 전달할 수 있는
	// 인수의 수가 결정되며, 값을 전달하는 인수와 값을 전달 받는
	// 매개 변수의 자료형이 서로 일치해야 합니다.

#pragma endregion

#pragma region

#pragma endregion

#pragma region

#pragma endregion


}