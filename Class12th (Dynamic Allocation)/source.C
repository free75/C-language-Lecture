#include <stdio.h>
#include <stdlib.h> // 동적 할당을 사용할 수 있게 만들어주는 헤더 파일입니다.

int main()
{
#pragma region 동적 할당
	// 프로그램을 실행하는 중에 필요한 만큼 메모리를
	// 할당하는 작업입니다.

#pragma region malloc allocation
	// malloc은 포인터를 반환하는 함수입니다.
	// 프로그램이 실행되는 동안 메모리 관리자에게 메모리를 요청하고
	// 헤딩하는 메모리의 시작 주소를 반환하는 함수입니다.

	//int* room = (int *)malloc(sizeof(int));
	//
	//*room = 77;
	//
	//printf("room의 값 : %d\n", *room);
	//
	//free(room); 
	// free는 동적 할당을 한 함수를 해제하는 것으로,
	// 동적 할당을 하기 위해 선언한 room이라는 포인터 함수를 free에 선언하면
	// 값이 해제되어, free 함수 후에 포인터 변수 room의 값을 출력하면
	// 역참조로 지정해놨던 값이 해제가 되어, 랜덤한 값이 출력되는 것을 볼 수 있습니다.

	// printf("room의 값 : %d\n", room);

	// 이미 해제한 메모리를 가리키는 포인터의 경우 예기치 않은
	// 동작을 유발할 수 있습니다.

	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를
	// 변경시킬 수 있으며, 동적으로 메모리의 크기를 할당할 때
	// 바이트 단위로 지정합니다.

#pragma endregion

#pragma region contiguous allocation
	// 연속된 메모리 공간을 확보하고, 모든 요소의 값을 0으로
	// 초기화된 뒤 메모리의 시작 주소를 반환하는 함수입니다.


	//int* address = calloc(sizeof(int), 5);
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("address[%d] : %d\n", i, address[i]);
	//}
	//
	//free(address);



#pragma endregion

#pragma region resize allocation
// 이미 할당된 메모리 공간의 크기를 확장하거나, 변경할 수 있는
// 함수입니다.



	// int* integer = (int*)malloc(sizeof(int) * 3);
	// // 포인터 변수로 선언한 메모리가 4byte 크기인 코드를 하나의 포인터 변수로 
	// // 총 12byte 메모리 크기를 가진 코드로 선언하기 위해서는 선언한 동적 할당 코드인
	// // 4byte 코드를 *3(곱하기 3)을 통해 12byte의 메모리 크기를 가진 코드로 선언하면 됩니다.
	// 
	// for (int i = 0; i < 3; i++) // 포인터를 사용한 배열문을 만들때 for문과 같이 선언합니다.
	// {
	// 	integer[i] = (i + 1) * 10;
	// 
	// 	printf("integer[%d] = %d\n", i, integer[i]);
	// }
	// 
	// // 위의 코드까지가 동적 할당을 하기 전까지의 포인터 배열문의 값이 나옵니다.
	// 
	// // 후에 동적 할당을 통해 20byte만큼의 메모리 크기를 늘리고 
	// integer = realloc(integer, sizeof(int) * 5);
	// 
	// // 너무 크거나 값이 일반적인 값으로 나오지 않는다면 NULL이라는 값이 나오게 됩니다.
	// 
	// int* temporary = realloc(integer, sizeof(int) * 5);
	// 
	// if (temporary == NULL)
	// {
	// 	free(integer);
	// 
	// 	return 1;
	// }
	// // 이대로 실행하게 된다면 추가한 NULL과 temporary의 
	// // integer 포인터 변수가 
	// 
	// integer = temporary;
	// 
	// integer[3] = 40;
	// integer[4] = 50;
	// 
	// printf("\n");
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("integer[%d] = %d\n", i, integer[i]);
	// }
	// 
	// free(integer);



#pragma endregion


#pragma endregion

	return 0;
}