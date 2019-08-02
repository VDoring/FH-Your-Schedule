#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
int main() {
	int Choose1; //메인메뉴에서 첫번째로 선택할대 사용하는 변수
	int Choose2; //스케쥴데이터를 추가할건지 삭제할건지 정하는 변수
	
	int Data_number; //Data배열 초기화 선택을 위한 변수
	int Save_count = 0; //이 값을 기준으로 어느 배열에 데이터를 저장할 것인지 선정
	char Data1[2000] = { 0, }; //데이터를 저장할 배열들. 1
	char Data2[2000] = { 0, }; //데이터를 저장할 배열들. 2
	char Data3[2000] = { 0, }; //데이터를 저장할 배열들. 3

	printf("\t\t\t\t\t\t[[DayWorker]]\n\n\n"); Sleep(300);
	printf("Doring"); Sleep(50);
	printf("'s "); Sleep(50);
	printf("Schedule "); Sleep(50);
	printf("management "); Sleep(50);
	printf("programs!"); Sleep(100);
	while (1) {
		Choose1 = 0, Choose2 = 0, Data_number = 0;
		printf("\n\n[1]ADD/DELETE Schedule\t[2]Check Schedule\t[3]Quit\ninput: ");
		scanf("%d", &Choose1);
		if (Choose1 == 1) { //1번 선택시
			printf("[1]Add\t[2]Delete?\n"); //스케쥴 추가할래 삭제할래?
			scanf("%d", &Choose2);
			// getchar(); 를 사용해야할까?
			if (Choose2 == 1) { //1번, 추가시
				printf("Input your schedule\ninput: ");
				if (Data1[1] == 0) { //만약, Data1에 아무것도 저장되어 있지 않을때
					if (Save_count == 0) { //만약 Save_count가 0일때
						scanf("%s", &Data1); //Data1에 저장
						printf("Save Number 1\n");
						Save_count++; //Save_count 0 -> 1
					}
				}
				else if (Save_count == 1) { //만약 Save_count가 1일때
						if (Data1[1] != 0) { //만약, Data1에 뭔가가 저장되어 있을때
							scanf("%s", &Data2); //Data2에 저장
							printf("Save Number 2\n");
							Save_count++; //Save_count 1 -> 2
						}
				}
				else if (Data2[1] != 0) { //만약, Data2에 뭔가가 저장되어 있을때 -!동작안됨!-
						if (Save_count == 2) { //만약 Save_count가 2일때
							scanf("%s", &Data3); //Data3에 저장
							printf("Save Number 3\n");
							Save_count++; //Save_count 2 -> 3
							}
						}

			}
			if (Choose2 == 2) { //2번, 삭제시
				printf("Input delete number\ninput: ");
				scanf("%d", &Data_number);
				if (Data_number == 1) {
					for (int i = 0; i < 2000; i++) {
						Data1[i] = 0;
					}
					Save_count = 0;
					printf("Data1 Reset Success!\n");
				}
				else if (Data_number == 2) {
					for (int i = 0; i < 2000; i++) {
						Data2[i] = 0;
					}
					Save_count = 1;
					printf("Data2 Reset Success!\n");
				}
				else if (Data_number == 3) {
					for (int i = 0; i < 2000; i++) {
						Data3[i] = 0;
					}
					Save_count = 2;
					printf("Data3 Reset Success!\n");
				}
			}
		}
		if (Choose1 == 2) { //2번 선택시
			printf("\n1.%s\n2.%s\n3.%s\n", Data1, Data2, Data3);
		}
		if (Choose1 == 3) {
			printf("\n\n\nCheer UP!\n\n\n");
			Sleep(800);
			break;
		}
	}
	
}

/*
if(!a) = if(a == 0)
if(a) = if(a != 0)
*/

/* 데이터를 영구적으로 저장할 수 있는 기능 찾기 */
/* [N] for문?을 이용하여 0부터 50까지 스케줄데이터를 저장할 수 있는 배열을 생성하기 */
/* 배열에 값이 저장되어 있지 않다면, 저장되어있지 않습니다 같은 문구를 뜨게하게 */
/* [S] 배열에 값이 저장되어있는지 확인하는 구문 만들기. (값이 들어있다면 다른 배열을 불러 입력하게 한다.) */
/* 데이터 입력시 띄어쓰기를 해도 데이터가 다 저장되게끔 만들기 */