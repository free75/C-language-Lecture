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




#pragma endregion

#pragma region 



#pragma endregion

#pragma region 



#pragma endregion

#pragma region 



#pragma endregion

#pragma region 



#pragma endregion

#pragma region 



#pragma endregion

#pragma region 



#pragma endregion

#pragma region 



#pragma endregion









	return 0;
}