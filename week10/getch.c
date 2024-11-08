#include <stdio.h>
#include <conio.h> //마이크로소프트의 표준 c 런타임 라이브러리

int main(void) {
	int input_data,
		count = 1;
	printf("Enter chars ('q', 'Q', or ESC to quit) :\n");

	//DRY = Don't Repeat Yourself
	while (1) {
		if (_kbhit()) { //키보드 치기 함수
			input_data = getchar(); //한 개의 문자를 입력받음

			//'q', 'Q', ESC 입력했으면 종료
			if (input_data == 'q' || input_data == 'Q' || input_data == 27) {
				printf("\nExiting program...\n");
				break;
			}
			// rewind(stdin); //표준 입력 버퍼에 있는 모든 입력 값을 제거
			printf("Input %d : %c\n", count, input_data);
		}
	}

	//int input_data = getchar(); //한 개의 문자를 입력받음
	//rewind(stdin); //표준 입력 버퍼에 있는 모든 입력 값을 제거
	//printf("First input : %c\n", input_data);

	//input_data = getchar();
	//rewind(stdin);
	//printf("Second input : %c\n", input_data);

	return 0;
}