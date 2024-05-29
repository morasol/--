#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>


void generate_password(char *password) {
	for (int i = 0; i < 4; i++) {
		password[i] = '0' + rand() % 10;
	}
	password[4]= '\0';
}

int main() {
	system("title 비밀번호 맞추기");
	/*system("color 1f"); */
	char password[5];//랜덤비번
	char guess[5];//맞추는 입력값
	int chance = 10;//기회 

	srand((unsigned int)time(0));
	generate_password(password);

	int random = atoi(password);
	printf("------------------------------------------------------------------------------------\n");
	printf("4자리수 비밀번호를 유추해보세요!\n");
	/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);*/
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

	
	   

