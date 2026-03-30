#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다
	// 배열은 자료형 변수명 [배열의 크기]; 로 이루어져 있습니다


//	int a1[5];
//
//	// 배열의 경우 첫 번째 원소는 0부터 시작합니다.
//
//	a1[0] = 10;
//	a1[1] = 20;
//	a1[2] = 30;
//	a1[3] = 40;
//	a1[4] = 50;
//
//	// 배열은 증감 연산자(for)을 사용해야 합니다.
//
//	for (int i = 0; i < 5; i++)
//	{
//	
//		a1[i] = (i + 1) * 10;
//
//		printf("a1[%d] : %d\n", i, a1[i]); 
//	}
	// 배열의 메모리 공간은 프로그램이 실행되는 동안
	// 변경할 수 없습니다.


	// 배열을 출력할 때에는 산술 연산자를 한번만 사용하는 것이 아닌
	// 배율을 사용하면서 쓰인 [] 안에도 산술 연산자를 사용해야 합니다.
	// 그리고 추가적으로 for문에서 지정한 변수까지 배열의 출력문에 기용해야합니다.
	// ex printf("a1 : %d\n", a1) X
	// printf("a1{%d] : %d\n",n a1[n]) O

//	int list[5] = { 1,2,3,4,5 };
//
//	sizeof(list[0]);
//	// 배열문에 sizeof를 추가한다를 의미합니다.
//
//	int size = sizeof(list) / sizeof(list[0]);
//	// int list문의 배열 바이트 크기는 5까지 총 20byte이고 뒤의 sizeof는
//	// 배열문 list의 0번째만 말하고 있으므로 5byte를 의미합니다.
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("list[%d]의 값 : %d\n", i, list[i]);
//	}
//	int* pointer = &list;
//
//	// 원하는 n번째의 배열문 문자, 숫자 등을 바꾸려면
//	// 변수명 = 변수명 + n;
//	// 역참조 = *변수명 = 22;
//	// 이런 식으로 바꾸어야 원하는 n번째의 배열문 문자, 숫자 등을 바꾸는 게 가능합니다.
//
//	pointer = pointer + 1;
//
//	*pointer = 22;
//
//	printf("pointer 변수의 값 : %p\n", pointer);
//	printf("list[1]의 값 : %d\n", list[1]);



	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은
	// 배열의 시작 주소를 의미합니다.

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정됩니다.






#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의
	// 집합입니다.
//	char forest [] = "apple"; 
//	// char는 1byte 입니다. (제발 외워라)
//	char* message = "integer";
//	// 문자열 포인터를 만드는 거이기 때문에 0번째 인덱스에 접근합니다.
//	// 하지만 문자열은 역참조 하는 것이 불가능합니다.
//
//	// 문자열의 서식 지정자는 %s입니다.
//
//	printf("forest의 주소의 값 : %s\n", forest);
//
//	printf("message의 주소의 값: %s\n", message);
//	// printf로 출력할 때 문자열은 예시로 든 message에 integer이라는 주소 값이 저장되어 있으니
//	// integer을 출력하려면 %s 그리고 message를 출력문에 기입해야합니다.
//
//	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록
//	// 할 수 있으며, 문자열 상수는 데이터 영역의 읽기 전용 공간
//	// 에 저장되기 때문에 문자열의 값을 변경할 수 없습니다.
//
//	message = "decimal";
//	// 문자열은 역참조는 불가능하지만, 문자를 새로 만드는 것은 가능합니다.
//
//	forest[2] = 'm';
//
//	printf("forest의 값 : %s\n", forest);
//
//	printf("message의 값 : %s\n", message);
//
//	// 문자열은 공백도 함께 메모리 공간에 포함하여 크기가 결정되며,
//	// 마지막에 문자열의 끝을 알려주는 제어 문자가 추가 됩니다.
//
//	forest[1] = '\0';
//
//	printf("forest의 값 : %s\n", forest);

	// 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 있지만,
	// 문자배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 출력됩니다.

#pragma endregion

#pragma region (2)차원 배열
// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

//int array2D[3][3] =
//{
//	{1, 2, 3}, 
//	{4, 5, 6},
//	{7, 8, 9},
//};
//
//
//
//for (int i = 0; i < 3; i++)
//{
//	for (int j = 0; j < 3; j++)
//	{
//		printf("%d", array2D[i][j]);
//	}
//	
//	printf("\n");
//}

// 2차원 배열은 행과 여로 구분되며, 앞에 있는 배열은
// 열을 의미하고, 뒤에 있는 배열은 행을 의미합니다.


#pragma endregion

#pragma region 

#pragma endregion

#pragma region

#pragma endregion

#pragma region

#pragma endregion

#pragma region

#pragma endregion












}