#include <stdio.h>
#include <conio.h> //����ũ�μ���Ʈ�� ǥ�� c ��Ÿ�� ���̺귯��

int main(void) {
	int input_data,
		count = 1;
	printf("Enter chars ('q', 'Q', or ESC to quit) :\n");

	//DRY = Don't Repeat Yourself
	while (1) {
		if (_kbhit()) { //Ű���� ġ�� �Լ�
			input_data = getchar(); //�� ���� ���ڸ� �Է¹���

			//'q', 'Q', ESC �Է������� ����
			if (input_data == 'q' || input_data == 'Q' || input_data == 27) {
				printf("\nExiting program...\n");
				break;
			}
			// rewind(stdin); //ǥ�� �Է� ���ۿ� �ִ� ��� �Է� ���� ����
			printf("Input %d : %c\n", count, input_data);
		}
	}

	//int input_data = getchar(); //�� ���� ���ڸ� �Է¹���
	//rewind(stdin); //ǥ�� �Է� ���ۿ� �ִ� ��� �Է� ���� ����
	//printf("First input : %c\n", input_data);

	//input_data = getchar();
	//rewind(stdin);
	//printf("Second input : %c\n", input_data);

	return 0;
}