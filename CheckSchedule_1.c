#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
int main() {
	int Choose1; //메인메뉴에서 첫번째로 선택할대 사용하는 변수
	int Choose2; //스케쥴데이터를 추가할건지 삭제할건지 정하는 변수
	
	int Data_number; //Data배열 초기화 선택을 위한 변수
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
				scanf("%s", &Data1);   /* !수정! Data1이 저장됬으면 다른 배열에 저장되게끔 만들기 */
			}
			if (Choose2 == 2) { //2번, 삭제시
				printf("Input delete number\ninput: ");
				scanf("%d", &Data_number);
				if (Data_number == 1) {
					char Data1[2000] = { 0, };   /* !수정! 초기화가 되지않음 */
					printf("Reset Success!\n");
				}
				else if (Data_number == 2) {
					char Data2[2000] = { 0, };
					printf("Reset Success!\n");
				}
				else if (Data_number == 3) {
					char Data3[2000] = { 0, };
					printf("Reset Success!\n");
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
/* for문?을 이용하여 0부터 50까지 스케쥴데이터를 저장할 수 있는 배열을 생성하기 */
/* 배열에 값이 저장되어 있지 않다면, 저장되어있지 않습니다 같은 문구를 뜨게하게 */
/* 배열에 값이 저장되어있는지 확인하는 구문 만들기. (값이 들어있다면 다른 배열을 불러 입력하게 한다.) */
/* 데이터 입력시 띄어쓰기를 해도 데이터가 다 저장되게끔 만들기 */