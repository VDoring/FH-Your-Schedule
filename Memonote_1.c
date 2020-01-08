#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
void main_CUI();
void rw_del_CUI(int mainCUI_input);
void write_data(int rwCUI_input);
void delete_data(int delCUI_input);

typedef struct _UserData1 {
	char data[1000];
} D1;
typedef struct _UserData2 {
	char data[1000];
} D2;
typedef struct _UserData3 {
	char data[1000];
} D3;


int main() {
	while (1) {
		main_CUI();
	}
}

void main_CUI() { //메인화면 CUI 담당 함수
	int mainCUI_input = 0;

	printf("VDoring's MemoNote\n");
	printf("[1] Read/Write\t[2]Delete\n=");
	scanf("%d", &mainCUI_input);
	rw_del_CUI(mainCUI_input);
}

void rw_del_CUI(int mainCUI_input) { //[1]Read/Write [2]Delete CUI 선택지 함수
	D1 Data1;
	D2 Data2;
	D3 Data3;

	int rwCUI_input;
	int delCUI_input;

	if (mainCUI_input == 1) {
		system("cls");
		printf("[Memo Data]\n");
		printf("1. %s\n", Data1.data);
		printf("2. %s\n", Data2.data);
		printf("3. %s\n", Data3.data);
		printf("\nChoose Write Data\n=");
		scanf("%d", &rwCUI_input);
		write_data(rwCUI_input);
	}
	else if (mainCUI_input == 2) {
		system("cls");
		printf("Choose Delete Data\n");
		printf("1. %s\n", Data1.data);
		printf("2. %s\n", Data2.data);
		printf("3. %s\n", Data3.data);
		scanf("%d", &delCUI_input);
		delete_data(delCUI_input);
	}
}

void write_data(int rwCUI_input) { //메모 쓰기 기능
	D1 Data1;
	D2 Data2;
	D3 Data3;

	system("cls");

	switch (rwCUI_input) {
	case 1:
		scanf("%s", Data1.data);
		break;
	case 2:
		scanf("%s", Data2.data);
		break;
	case 3:
		scanf("%s", Data3.data);
		break;
	}
}

void delete_data(int delCUI_input) { //메모 제거 기능
	D1 Data1;
	D2 Data2;
	D3 Data3;

	system("cls");

	switch (delCUI_input) {
	case 1:
		for (int i = 0; i < 1000; i++) Data1.data[i] = 0;
		break;
	case 2:
		for (int i = 0; i < 1000; i++) Data2.data[i] = 0;
		break;
	case 3:
		for (int i = 0; i < 1000; i++) Data3.data[i] = 0;
		break;
	}
}