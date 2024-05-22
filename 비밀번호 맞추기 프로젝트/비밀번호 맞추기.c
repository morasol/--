#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void generate_password(char *password) {
	for (int i = 0; i < 4; i++) {
		char[i] = '0' + rand() % 10;

	}
}

int main() {

	char password[4];//랜덤비번
	char input[4];//맞추는 입력값
	int chance = 10;//기회
	
	srand(time(0));
	generate_password(password);
	


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("4자리수 비밀번호를 유추해보세요!\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	printf("기회는 10번\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	printf("입력한 숫자에 따라 비밀번호가 입력된 수 보다 크거나 작다고 힌트를 제공합니다\n");
	
	while (chance--) {
		printf("비밀번호를 입력하세요 기회는 단 %d번 !!:",chance +1);

	 }
	   

}