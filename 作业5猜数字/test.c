#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("***********************");
	printf("*******  1.play  ******");
	printf("*******  2.exit  ******");
	printf("***********************");

}
void game()
{
	int ret = rand() % 100 + 1;
	while (1)
	{

	}

}
int main()
{
	int input;
	srand((unsigned in)time(NULL);
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{case1:
		game();
		break;
	case2:
		printf("退出游戏\n");
		default:
			printf("输入错误，请重新输入");
		}while (input);
		return 0;
	}
	



//密码输入3次
//int main()
//{
//	int i = 0;
//	char password[20];
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码！");
//		scanf("%s", &password);
//		if (0 == strcmp(password, "123456"))
//		{
//			break;
//		}
//		else
//		{
//			printf("密码输入错误，请重新输入\n");
//		}
//	}if (i < 3)
//	{
//		printf("登陆成功");
//	}else
//    {printf("推出成功");}
//	system("pause");
//	return 0;
//}

