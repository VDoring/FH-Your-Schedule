#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>

struct Data1 {
	char text[1000];
};

int main() {
	struct Data1 D1;
	char D1_input[1000] = { 0, };
	int Q_input;

	for (int i = 0; i < 1000; i++) D1.text[i] = 0; //구조체에 들어있는 배열 초기화

	while (1) {
		printf("VDoring's MemoNote 0.0.1\n\n");
		printf("[Text]\n");
		printf("1. %s\n", D1.text);

		printf("\nInput Memo?\n");
		printf("[1]Yes\t[2]No\n=");
		scanf("%d", &Q_input);
		if (Q_input == 1) {
			system("cls");
			scanf("%s", D1.text);
		}
		else if (Q_input == 2) {
			system("cls");
			continue;
		}
	}

}