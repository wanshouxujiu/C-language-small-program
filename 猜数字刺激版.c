#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("************************************************\n");
	printf("****        Play(1)          Exit(0)        ****\n");
	printf("************************************************\n");
}

shutdown()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("\n请注意，你的电脑将在一分钟内关机，如果输入：我是猪，就取消关机\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}

game()
{
	int guess = 0;//接收输入的数
	int ret = 0;
	int num = 0;
	ret = rand() % 100 + 1;//设置随机值,且限制在100以内
	printf("                               ***猜数字***\n");
	//printf("ret = %d", ret);
	while (1)
	{
		printf("请猜100以内数字：\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			num++;
			printf("猜大了，已经猜了%d次，10次内没猜对有惩罚哦！", num);
		}
		else if (guess < ret)
		{
			num++;
			printf("猜小了，已经猜了%d次，10次内没猜对有惩罚哦！", num);
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
		if (10 == num)
		{
			printf("\n你好菜啊，关机关机~~~      ");
			shutdown();
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));//利用时间戳
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("你怎么睡得着的？你这个阶段，你这个年龄段，你睡得着觉？\n");
			break;
		default:
			printf("你搞什么哇？\n");
		}

	} while (input);
	return 0;
}