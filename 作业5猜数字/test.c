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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{case1:
		game();
		break;
	case2:
		printf("�˳���Ϸ\n");
		default:
			printf("�����������������");
		}while (input);
		return 0;
	}
	



//��������3��
//int main()
//{
//	int i = 0;
//	char password[20];
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룡");
//		scanf("%s", &password);
//		if (0 == strcmp(password, "123456"))
//		{
//			break;
//		}
//		else
//		{
//			printf("���������������������\n");
//		}
//	}if (i < 3)
//	{
//		printf("��½�ɹ�");
//	}else
//    {printf("�Ƴ��ɹ�");}
//	system("pause");
//	return 0;
//}

