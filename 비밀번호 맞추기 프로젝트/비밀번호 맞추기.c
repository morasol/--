#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>


void generate_password(char *password, int step) {
	for (int i = 0; i < step; i++) {
		password[i] = '0' + rand() % 10;
	}
	password[step]= '\0';
}

int main() {
	system("title ��й�ȣ ���߱�");
	system("color 0f"); 
	char password[5];//�������
	char guess[5];//���ߴ� �Է°�
	int chance = 10;//��ȸ 
	int step;
	srand((unsigned int)time(0));

	printf("���̵��� �����ϼ���\n");
	printf("����(1),����(2),�����(3):\n");
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

	int random = atoi(password);
	printf("------------------------------------------------------------------------------------\n");
	printf("%d�ڸ��� ��й�ȣ�� �����غ�����!\n", step);
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
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
			printf("DOWN\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		}
		else if (input < random) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("UP\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
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
   
	
	   

