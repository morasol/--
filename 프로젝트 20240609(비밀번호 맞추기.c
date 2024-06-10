#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


void generate_password(char* password, int step) //�����Լ��� generatepassword ȣ��
//char* ��й�ȣ�� ���� �迭�� ������ ���� ������
{
	for (int i = 0; i < step; i++)//i�� step(��й�ȣ ���̵�)�� ���� ����
	{
		password[i] = '0' + rand() % 10;//0~9������ ���� ���� ���� 0�� ���������� 
		//rand() % 10�� ��ȯ�ϴ� ���ڸ� ���ڷ� �ƽ�Ű�ڵ�� ��ȯ
	}
	password[step] = '\0';//�� ����(���ڿ��� ������ ���� �߰�)
}

int main() {
	char password[5];//�������
	char guess[5];//���ߴ� �Է°�
	int chance = 10;//��ȸ 
	int step;
	srand((unsigned int)time(0));//������ ���� �ޱ� ���� srand time ���

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

	int random = atoi(password);//���ڿ��� ���������� ��ȯ
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