#define _CRT_SECURE_NO_WARNINGS 1
#include"三子棋.h"

void menu()
{
	printf("                               ************************************************\n");
	printf("                               *******      play(1)         Exit(0)     *******\n");
	printf("                               ************************************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//二维数组

	Initboard(board, ROW, COL);//初始化，让空格填满数组
	Dispalyboard(board, ROW, COL);//打印表格
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		Dispalyboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		Computermove(board, ROW, COL);
		Dispalyboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("你获胜了\n");
	else if (ret == '#')
		printf("电脑获胜(这游戏难在让电脑获胜~~)\n");
	else
		printf("平局\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case(1):
			printf("                                                    三子棋          \n");
			printf("                                            输入格式：数字空格数字 \n\n");
			game();
			break;
		case(0):
			printf("退出游戏\n");
			break;
		default:
			printf("你搞什么哇？\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}