#define _CRT_SECURE_NO_WARNINGS 1
#include"ɨ��.h"

void menu()
{
	printf("*************************************************\n");
	printf("********     Play(1)         Exit(0)     ********\n");
	printf("*************************************************\n");
}

void game()
{
	//�׵Ĵ�����Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�׵��Ų���Ϣ
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//����
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d%*c", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("���治���ˣ�\n");
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}