#define _CRT_SECURE_NO_WARNINGS 1
#include"扫雷.h"

void menu()
{
	printf("*************************************************\n");
	printf("********     Play(1)         Exit(0)     ********\n");
	printf("*************************************************\n");
}

void game()
{
	//雷的储存信息
	char mine[ROWS][COLS] = { 0 };
	//雷的排查信息
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//放雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//扫雷
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
			printf("退出程序\n");
			break;
		default:
			printf("还玩不玩了？\n");
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}