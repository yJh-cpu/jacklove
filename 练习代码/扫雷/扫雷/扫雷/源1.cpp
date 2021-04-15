#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"  
void mune()
{
	printf("******************************************************************\n");
	printf("***************************0.exit*********************************\n");
	printf("***************************1.play*********************************\n");
	printf("******************************************************************\n");
}
void game()
{
	char mine[ROW][COL];
	char show[ROW][COL];
	char spread[ROW][COL];
	int x, y, m;
	int row, col;
	int count = 0;
	int ret;
	row = ROW;
	col = COL;
	m = M;//�������е�����M��ֵ��m  
	init(mine, show, spread);
	Set_Mine(mine, m);

	//displaymine(mine);//�ڲ�������ʾ��  
	do
	{
		displayboard(show);
		count++;
		printf("��������������������������������");
		printf("��ʼɨ��>:");
		scanf("%d %d", &x, &y);
		getchar();
		x = x - 1;
		y = y - 1;
		if (count == 1)
		{
			prevent_first_death(mine, x, y);
		}
		sweep_Mine(mine, show, x, y);

		ret = check_win(mine, show, m);
		if (ret == 1)
		{
			displayboard(show);
			printf("��������������������������������");
			printf("�ȵ�ը�� GG \n\n");
			break;
		}
		else if (ret == 0)
		{
			displayboard(show);
			printf("��������������������������������");
			printf("ɨ�׳ɹ���\n\n ");
			break;
		}

	} while (1);

}
int main()
{
	int n = 0;
	do
	{
		mune();
		printf("������ѡ��");
		scanf("%d", &n);
		printf("������������������������������������������������������������������\n");
		getchar();
		if (n == 1)
		{
			game();
		}
		else if (n == 0)
		{
			break;
		}
		else
		{
			printf("�������� ��������\n");
		}

	} while (1);


	return 0;
}