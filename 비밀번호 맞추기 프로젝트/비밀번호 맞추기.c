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
	system("title ��й�ȣ ���߱�");
	/*system("color 1f"); */
	char password[5];//�������
	char guess[5];//���ߴ� �Է°�
	int chance = 10;//��ȸ 

	srand((unsigned int)time(0));
	generate_password(password);

	int random = atoi(password);
	printf("------------------------------------------------------------------------------------\n");
	printf("4�ڸ��� ��й�ȣ�� �����غ�����!\n");
	/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);*/
	printf("��ȸ�� 10���Դϴ�\n");
	printf("�Է��� ���ڿ� ���� ��й�ȣ�� �Էµ� �� ���� ũ�ų� �۴ٰ� ��Ʈ�� �����մϴ�\n");
	printf("------------------------------------------------------------------------------------\n");



	while (chance--) {

		printf("��й�ȣ�� �Է��ϼ��� ��ȸ�� �� %d�� !!:", chance + 1);
		scanf("%4s", guess);


		int input = atoi(guess);

		if (input == random) {
			printf("�����մϴ� �����Դϴ�!");
			break;
		}
		else if (input > random) {
			printf("DOWN\n");
			
		}
		else if (input < random) {
		printf("UP\n");
	}
}
		printf("���ӿ� �����ϼ̽��ϴ� �ٽ��ϰڽ��ϱ�? (y/n): ");
		char retry;
		scanf(" %c", &retry);
		if (retry == 'y' || retry == 'Y') {
			main();
		}
		else {
			printf("������ �����մϴ�.\n");

		}
	}

	
	   

