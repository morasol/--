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

	char password[4];//�������
	char input[4];//���ߴ� �Է°�
	int chance = 10;//��ȸ
	
	srand(time(0));
	generate_password(password);
	


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("4�ڸ��� ��й�ȣ�� �����غ�����!\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	printf("��ȸ�� 10��\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	printf("�Է��� ���ڿ� ���� ��й�ȣ�� �Էµ� �� ���� ũ�ų� �۴ٰ� ��Ʈ�� �����մϴ�\n");
	
	while (chance--) {
		printf("��й�ȣ�� �Է��ϼ��� ��ȸ�� �� %d�� !!:",chance +1);

	 }
	   

}