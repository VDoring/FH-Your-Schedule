#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>

struct Data1 {
	char text1[1000];
	char text2[1000];
};

int main() {
	struct Data1 D1;
	char D1_input[1000] = { 0, };
	int Q_input;
	int Edit_select, Delect_select;

	for (int i = 0; i < 1000; i++) D1.text1[i] = 0; //구조체에 들어있는 배열 초기화
	for (int i = 0; i < 1000; i++) D1.text2[i] = 0; //구조체에 들어있는 배열 초기화

	while (1) {
		printf("* =VDoring's MemoNote 0.0.2 =*\n\n");
		printf("[Text]\n");
		printf("1. %s\n", D1.text1);
		printf("2. %s\n", D1.text2);

		printf("\n[Mode select]\n");
		printf("[1]Edit\t[2]Remove\t[3]Cancel\n=");
		scanf("%d", &Q_input);
		if (Q_input == 1) {
			system("cls");
			printf("Select Edit memo numbers\n=");
			scanf("%d", &Edit_select);
			if (Edit_select == 1) {
				printf("Input Please\n=");
				scanf("%s", D1.text1);
				system("cls");
				continue;
			}
			else if (Edit_select == 2) {
				printf("Input Please\n=");
				scanf("%s", D1.text2);
				system("cls");
				continue;
			}
		}
		else if (Q_input == 2) {
			system("cls");
			printf("Select Delete memo numbers\n=");
			scanf("%d", &Delect_select);
			if (Delect_select == 1) {
				for (int i = 0; i < 1000; i++) D1.text1[i] = 0; //구조체에 들어있는 배열 초기화
				system("cls");
				continue;
			}
			else if (Delect_select == 2) {
				for (int i = 0; i < 1000; i++) D1.text2[i] = 0; //구조체에 들어있는 배열 초기화
				system("cls");
				continue;
			}
		}
		else if (Q_input == 3) {
			system("cls");
			continue;
		}
	}

}