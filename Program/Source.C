#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

//	int integer = 10;
//
//	printf("integer : %p\n", &integer);

	// 데이터의 주소는 해당 데이터가 저장된 메모리의
	// 시작 주소를 의미하며, 메모리의 공간은 1byte의 크기로 나누어 표현합니다.
#pragma endregion

#pragma region 표준 입력 함수
	// 여러 종류의 데이터를 다양한 서식에 맞추어
	// 입력해주는 함수입니다.

//	int x = 0;

	// scanf_s를 사용할 경우 변수가 아닌  서식 지정자를 써야하는데
	// 예시로 int x = 0; 이라는 변수를 만들었을 때,
	// scnaf_s를 사용하면 서식 지정자는 정수형 서식 지정자인 %d를 사용해야합니다.

	// 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로
	// 넘어갈 수 없습니다.

	// scanf_s에 문자를 출력하고 싶다면 scanf_s를 쓰기 전에 printf를 이용해서 문자를 출력하면 됩니다.

//	printf("x 변수의 값을 입력해주세요 : ");
//
//	scanf_s("%d", &x);
//
//	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
//	// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.
//
//	// scanf_s 로 코드를 짜고 난 이후엔 출력 코드로 printf로 코드를 만듭니다.
//	printf("x의 값 : %d\n", x);

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를 보관
	// 하였다가 입력하는 순간 버퍼 안의 내용을 프로그램에 전송합니다.



#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

//	int room = 10;
//
//	// 포인터를 사용하기 위해서는 자료형 * 변수명 = &변수명; 으로 이루어져야 합니다.
//	// 포인터를 사용할 때 쓰는 변수명은 무조건 달라야합니다.
//
//	int * integer = &room; // 여기서 변수명 앞에 &을 붙이는 이유는 값을 저장하기 위해서 입니다.
//	// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로,
//	// 포인터가 가리키는 메모리 자료형을 선언해주어야 합니다.
//
//	printf("room 변수의 값 : %p\n", &room);
//	printf("integer 변수의 주소 : %p\n", &integer);
//	printf("integer 변수의 주소 : %p\n", &integer);
//
//	*integer = 99;
//
//	// room의 변수의 값을 재창초 하려면 서식 지정자를 %p인
//	// 포인터 서식 지정자가 아닌 정수형 서식 지정자 %d를
//	// 사용해야합니다.
//
//	// integer 변수의 값은 위의 코드식에서 지정하지 않았는데
//	// 만약 integer 변수의 값을 지정하게 된다면,
//	// 포인터 변수인 room의 값도 지정한 integer 변수의 값과 똑같은 값이 나오게 됩니다.
//
//	printf("room 변수의 값 : %d\n", room);
//	printf("integer 변수의 값 : %d\n", *integer);
//
//	int storage = 20;
//	
//	integer = &storage;
//
//	printf("integer의 변수 값 : %p\n", integer);
//	printf("integer이 가리키는 값 : %d\n\n", *integer);
//
//	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며, 포인터 변수에 
//	// 변수의 주소를 저장하게 되면 해당 변수의 시작 주소를 가리킵니다.
//
//	printf("integer 변수의 크기 : %u\n", sizeof(integer));

	// 이 출력문은 지정한 변수명의 byte 수가 몇인지 알려주는 출력문입니다.

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 있는 크기로
	// 정해지며, 한 번에 처리할 수 있는 크기는 운영 체제에 따라 크기가 결정됩니다.


#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터입니다.

	// 흔히 void * 변수명을 이용해서 쓰고 byte 수는 8byte입니다.

//	char rank = 'S'; // char 변수는 1byte입니다.
//
//	int level = 1;
//
//	float attack = 12.5f;
//	// 포인터 값을 초기화 하려면 NULL을 사용해야합니다.
//
//	void* reference = NULL;
//
//	reference = &attack;
//	// reference의 값을 rank 값으로 치환합니다.
//
//	// 범용 포인터는 메모리 주소에 접근해서 값을
//	// 변경할 수 없습니다.
//
//	*(char*)reference = 'A';
//	// 일반적인 역창조는 포인터 *를 앞에 붙히고 뒤엔 포인터 변수를 써서 역창조를 했지만,
//	// 이미 위에 reference의 값을 rank 값인 A로 바꿨기 때문에 일반적인 역창조는 불가능합니다.
//	// 그러니 포인터(자료형)을 활용해서 *(char) reference로 바꿀 경우 이미 정한 값을 
//	// 역창조하여 값을 바꾸는 것이 가능합니다.
//
//	reference = &level;
//
//	*(int*)reference = 5;
//
//	printf("rank :%p\n", &rank);
//
//	printf("attack : %p\n", &attack);
//
//	printf("reference : %p\n", &reference);
//
//	reference = &attack;
//
//	*(float*)reference = 17.5f;
//
//	printf("attack : %f\n", attack);
//
//	printf("reference : %p\n", reference);


	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가
	// 가리키는 변수의 자료형으로 변환해주어야 합니다.

	





#pragma endregion

#pragma region 상수 지시 포인터
// 포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수
// 없도록 지정되어 있는 포인터입니다.

// int y = 10;
// 
// int z = 20;
// 
// const int* address = &y; // const라는 키워드를 붙히고 변수의 값을 변경한 경우 
//                          // 그 이후엔 역창조가 불가능합니다.
// 
// 
// printf("y의 주소 값 : %p\n", &y);
// 
// printf("address의 값 : %p\n\n", address);
// 
// address = &z;
// 
// printf("z의 주소 값 : %p\n", &z);
// 
// printf("address의 값 : %p\n", address);

#pragma endregion

#pragma region 포인터 상수
// 포인터 변수가 가리키고 있는 주소 값을 변경할 수
// 없는 포인터입니다.
// 포인터 상수는 const 와는 다르게 자료형 앞에 코드를 넣는게 아닌
// 변수명 앞에 코드를 넣어야합니다.

int integer = 5;

int* const room = &integer;

*room = 7;

printf("integer 의 주소 값 : %p\n", &integer);
printf("room 변수가 가리키는 값 : %d\n", *room);



#pragma endregion

}