#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
int main() {
	int Choose1; //���θ޴����� ù��°�� �����Ҵ� ����ϴ� ����
	int Choose2; //�����쵥���͸� �߰��Ұ��� �����Ұ��� ���ϴ� ����
	
	int Data_number; //Data�迭 �ʱ�ȭ ������ ���� ����
	int Save_count = 0; //�� ���� �������� ��� �迭�� �����͸� ������ ������ ����
	char Data1[2000] = { 0, }; //�����͸� ������ �迭��. 1
	char Data2[2000] = { 0, }; //�����͸� ������ �迭��. 2
	char Data3[2000] = { 0, }; //�����͸� ������ �迭��. 3

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
		if (Choose1 == 1) { //1�� ���ý�
			printf("[1]Add\t[2]Delete?\n"); //������ �߰��ҷ� �����ҷ�?
			scanf("%d", &Choose2);
			// getchar(); �� ����ؾ��ұ�?
			if (Choose2 == 1) { //1��, �߰���
				printf("Input your schedule\ninput: ");
				if (Data1[1] == 0) { //����, Data1�� �ƹ��͵� ����Ǿ� ���� ������
					if (Save_count == 0) { //���� Save_count�� 0�϶�
						scanf("%s", &Data1); //Data1�� ����
						printf("Save Number 1\n");
						Save_count++; //Save_count 0 -> 1
					}
				}
				else if (Save_count == 1) { //���� Save_count�� 1�϶�
						if (Data1[1] != 0) { //����, Data1�� ������ ����Ǿ� ������
							scanf("%s", &Data2); //Data2�� ����
							printf("Save Number 2\n");
							Save_count++; //Save_count 1 -> 2
						}
				}
				else if (Data2[1] != 0) { //����, Data2�� ������ ����Ǿ� ������ -!���۾ȵ�!-
						if (Save_count == 2) { //���� Save_count�� 2�϶�
							scanf("%s", &Data3); //Data3�� ����
							printf("Save Number 3\n");
							Save_count++; //Save_count 2 -> 3
							}
						}

			}
			if (Choose2 == 2) { //2��, ������
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
		if (Choose1 == 2) { //2�� ���ý�
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

/* �����͸� ���������� ������ �� �ִ� ��� ã�� */
/* [N] for��?�� �̿��Ͽ� 0���� 50���� �����ٵ����͸� ������ �� �ִ� �迭�� �����ϱ� */
/* �迭�� ���� ����Ǿ� ���� �ʴٸ�, ����Ǿ����� �ʽ��ϴ� ���� ������ �߰��ϰ� */
/* [S] �迭�� ���� ����Ǿ��ִ��� Ȯ���ϴ� ���� �����. (���� ����ִٸ� �ٸ� �迭�� �ҷ� �Է��ϰ� �Ѵ�.) */
/* ������ �Է½� ���⸦ �ص� �����Ͱ� �� ����ǰԲ� ����� */