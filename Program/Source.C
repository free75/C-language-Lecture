#include <stdio.h>

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
	// 1이라는 값으로 나타내는 연산자입니다.


//	printf("10 < 20 : %d\n", 10 < 20);
//
//	printf("10 > 20 : %d\n", 10 > 20);
//
//	printf("10 <= 20 : %d\n", 10 <= 20);
//
//	printf("10 >= 20 : %d\n", 10 >= 20);
//
//	printf(" 10 == 20 : %d\n", 10 == 10);
//
//	printf(" 10 != 10 : %d\n", 10 != 10);
//
	// 관계 연산자는 조건이 맞을 때, 1이라는 값으로 반환되며,
	// 조건이 틀릴 때 0이라는 값으로 반환됩니다.


	// 여기서 == 는 같다를 의미하고,
	// != 는 다르다를 의미합니다.








#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
	// 명령문입니다.

//	int man = 0;
//
//	if (man <= 0)
//	{
//		
//
//		printf("Destroy");
//
//	}
//
	// if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않습니다.


#pragma endregion

#pragma region else if문
	// if문의 조건이 틀릴 때 else if문의 조건이
	// 맞다면 실행되는 명령문입니다.

//	int level = 1;
//
//	if (level <= 0)
//	{
//		printf("success");
//
//	}
//	else if (level <= 1)
//	{
//		printf("fail");
//
//	}
	// else if문은 여러번 정의할 수 있으며, if문이
	// 존재할 때 사용할 수 있습니다.

#pragma endregion

#pragma region else문
	// if문과 else if문의 조건이 다 틀리면
	// 실행되는 명령문입니다.

//	int integer = 0;
//
//	if (integer > 0)
//	{
//		printf("yes");
//
//	}
//	else if(integer < 0)
//	{
//
//		printf("yes");
//
//	}
//	else
//	{
//
//		printf("not");
//
//	}

	// if문의 연결된 모든 조건문의 조건이 맞을 때,
	// 가장 위에 있는 조건문만 실행됩니다.

#pragma endregion

#pragma region switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

//char grade = 'G';
//
//// switch문은 해당 조건이 완료되었을 때, break문이 없으면
//// 나머지 밑에 있는 case문까지 계속 실행시키다가 종료합니다.
//
//switch (grade)
//{
//case 'A': printf("90 to 100 points\n");
//	break;
//case 'B': printf("80 to 89 points\n");
//	break;
//case 'C': printf("70 to 79 points\n");
//	break;
//case 'D': printf("60 to 69 points\n");
//	break;
//case 'E': printf("50 to 59 points\n");
//	break;
//case 'F': printf("a score lower than 60\n");
//	break;
//
//default : printf("exception");
//	break;
//}

// switch문의 경우 조건에 해당하는 값에 따라 조건의
// 위치로 이동합니다.
#pragma endregion

#pragma region 논리 연산자

#pragma endregion

#pragma region AND 연산자
// 두 개의 조건이 다 성립될 때 실행되는 연산자입니다.


//int HP = 90;
//int MP = 80;
//
//if (HP >= 80 && MP >= 70)
//{
//
//	printf("success");
//
//}
// 조건문에서 하나 이상의 조건이 있다면 왼쪽에서부터 조건을 검사합니다.
		
#pragma endregion

#pragma region OR 연산자
// 두 개의 조건 중에 하나라도 조건이 성립될 때 실행되는 연산자입니다.

// int HP = 0;
// float MP = 90;
// 
// if (HP == 90 || MP >= 80)
// {
// 
// 	printf("success");
// 
// }
// else if (HP <= 0 || MP <= 0)
// {
// 
// 	printf("fail");
// 
// }
// 조건문의 논리 표현식을 평가하는 도중에 결과가 이미 확정이 났다면,
// 그 이후의 평가는 생략합니다.

#pragma endregion

#pragma region NOT 연산자
// 하나의 조건을 반전시키는 연산자입니다.

// int power = 0;
// 
// if (!power)
// {
// 	printf("the power if on");
// }
// else
// {
// 	printf("the power if off");
// }

#pragma endregion

#pragma region 사분면



#pragma endregion

}