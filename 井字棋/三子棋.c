#define _CRT_SECURE_NO_WARNINGS 1
#include"������.h"

void menu()
{
	printf("                               ************************************************\n");
	printf("                               *******      play(1)         Exit(0)     *******\n");
	printf("                               ************************************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//��ά����

	Initboard(board, ROW, COL);//��ʼ�����ÿո���������
	Dispalyboard(board, ROW, COL);//��ӡ���
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		Dispalyboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		//��������
		Computermove(board, ROW, COL);
		Dispalyboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("���ʤ��\n");
	else if (ret == '#')
		printf("���Ի�ʤ(����Ϸ�����õ��Ի�ʤ~~)\n");
	else
		printf("ƽ��\n");
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
			printf("                                                    ������          \n");
			printf("                                            �����ʽ�����ֿո����� \n\n");
			game();
			break;
		case(0):
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���ʲô�ۣ�\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}