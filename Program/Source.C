#include <stdio.h>

#include <stdarg.h>


// va_arg :  가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져오는 함수입니다.

// va_end : 가변 인수가 끝났을 때 포인터를 NULL로 초기화하는 함수입니다.



// 함수는 주로 main 함수가 선언되기 전에 선언합니다.
// 함수 선언 방법: main 함수 선언 전에 함수 이름을 만듭니다.
void render(int life)
{
	for (int i = 5; i < life; i++)
	{
		printf("#");
	}

	printf("\n");
}
void swap(int* argument_x, int* argument_y)
{

	int temporary = *argument_x;

	*argument_x = *argument_y;

	*argument_x = temporary;


}

int absolute(int x)
{
	return (x < 0) ? -x : x; 
	// return 삼합 연산자 설명
	// -x에 -7이 들어가서 -(-7)이라는 식이 나오니 계산하면 7로 출력됩니다.
	// 반환형을 사용할때 원하는 값으로 바꿀땐 return과 삼합 연산자를 이용하는 것이 쉽다.
}

void execute(int count)
{

	if (count <= 0) 
	{
		return;
	}

	execute(count -1);

	printf("count : %d\n", count);
    
}

double average(int size, ...) // 지정한 함수 이름 바꾸는 방법: 변수명 우클릭 두번 후에 이름 바꾸기 클릭
{
	// va_list : 가변 인수의 메모리 주소를 저장하는 포인터 변수입니다.
	va_list pointer;

	// va_start : 가변 인수를 가져올 수 있도록 포인터를 설정하는 함수입니다.
	va_start(pointer, size);

}
double sum(int room, ...)
{

}

int main()
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

#pragma region 반환형
	// 함수가 실행을 마치고, 호출한 쪽으로 어떤 자료형의 값을
	// 반환할 지 미리 알려주는 형식입니다.

	// 반환형을 사용할 때엔 return 값;을 사용해야합니다.

	//printf("%d\n", absolute(-7));
	
	// 함수의 경우 자료형과 반환하는 값의 형태가
	// 일치하지 않으면 원하는 값을 얻을 수 없습니다.


#pragma endregion

#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을
	// 수행하는 함수입니다.

	// execute(3);

	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에
	// 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생합니다.

#pragma endregion

#pragma region 가변 인수 목록
	// 고정되어 있는 매개 변수 외에 개수가 정해지지 않은
	// 인수를 추가로 받을 수 있는 인수입니다.

	va_list




#pragma endregion

	// 안정성있게 main함수를 끝내거나, 실행하기 위해선 int main과 return0;를 사용해야합니다.
	return 0;
}