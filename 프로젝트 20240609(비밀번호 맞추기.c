#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


void generate_password(char* password, int step) //메인함수의 generatepassword 호출
//char* 비밀번호를 문자 배열에 저장을 위한 포인터
{
	for (int i = 0; i < step; i++)//i가 step(비밀번호 난이도)에 맞춰 설정
	{
		password[i] = '0' + rand() % 10;//0~9사이의 임의 정수 생성 0을 더해줌으로 
		//rand() % 10의 반환하는 숫자를 문자로 아스키코드로 변환
	}
	password[step] = '\0';//널 문자(문자열을 끝내기 위해 추가)
}

int main() {
	char password[5];//랜덤비번
	char guess[5];//맞추는 입력값
	int chance = 10;//기회 
	int step;
	srand((unsigned int)time(0));//랜덤한 값을 받기 위해 srand time 사용

	printf("난이도를 선택하세요\n");
	printf("쉬움(1),보통(2),어려움(3):\n");
	printf("");
	int difficulty;
	scanf("%d", &difficulty);

	switch (difficulty) {
	case 1:
		chance = 10;
		step = 2;
		break;
	case 2:
		chance = 10;
		step = 3;
		break;

	case 3:
		chance = 10;
		step = 4;
		break;

	default:
		main();
	}


	generate_password(password, step);

	int random = atoi(password);//문자열을 정수형으로 변환
	printf("------------------------------------------------------------------------------------\n");
	printf("%d자리수 비밀번호를 유추해보세요!\n", step);
	printf("기회는 10번입니다\n");
	printf("입력한 숫자에 따라 비밀번호가 입력된 수 보다 크거나 작다고 힌트를 제공합니다\n");
	printf("------------------------------------------------------------------------------------\n");



	while (chance--) {

		printf("비밀번호를 입력하세요 기회는 단 %d번 !!:", chance + 1);
		scanf("%4s", guess);


		int input = atoi(guess);

		if (input == random) {
			printf("축하합니다 정답입니다!");
			break;
		}
		else if (input > random) {
			printf("DOWN\n");
		}
		else if (input < random) {
			printf("UP\n");
			
		}
	}
	printf("게임에 실패하셨습니다 다시하겠습니까? (y/n): ");
	char retry;
	scanf(" %c", &retry);
	if (retry == 'y' || retry == 'Y') {
		main();
	}
	else {
		printf("게임을 종료합니다.\n");

	}
}