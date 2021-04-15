
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"  
void init(char mine[ROW][COL], char show[ROW][COL], char spread[ROW][COL])//��ʼ������  
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW - 1; i++)//��ʼ��9*9����  
	{
		for (j = 0; j < COL - 1; j++)
		{
			mine[i][j] = ' ';
			show[i][j] = '*';
		}
	}

}
void displayboard(char show[ROW][COL])//��ӡ9*9����  
{
	int i, j;
	printf("  |");
	for (i = 1; i < ROW; i++)
	{
		printf("%d ", i);
	}
	printf("\n��|��������������������\n");
	for (i = 0; i < ROW - 1; i++)
	{
		printf("%2d|", i + 1);
		for (j = 0; j < COL - 1; j++)
		{
			printf("%c ", show[i][j]);
		}
		printf("\n");
	}


}
void displaymine(char mine[ROW][COL])             
{


	int i, j;
	printf("  |");
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	printf("\n--|--------------------\n");
	for (i = 0; i < ROW - 1; i++)
	{
		printf("%2d|", i + 1);
		for (j = 0; j < COL - 1; j++)
		{
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}



}
void  Set_Mine(char mine[ROW][COL], int m) 
{
	int x, y;
	while (m)
	{

		x = rand() % 10 + 0;
		y = rand() % 10 + 0;

		if (mine[x][y] == ' ')
		{
			mine[x][y] = '$';
			m--;
		}

	}
	m = M;
}
int mineNum(char mine[ROW][COL], int x, int y)  //ͳ���ܱ�8�����ӵ�����
{
	int count = 0;

	if (mine[x - 1][y - 1] == '$')
	{
		count++;
	}
	if (mine[x - 1][y] == '$')
	{
		count++;
	}
	if (mine[x - 1][y + 1] == '$')
	{
		count++;
	}
	if (mine[x][y + 1] == '$')
	{
		count++;
	}
	if (mine[x + 1][y + 1] == '$')
	{
		count++;
	}
	if (mine[x + 1][y] == '$')
	{
		count++;
	}
	if (mine[x + 1][y - 1] == '$')
	{
		count++;
	}
	if (mine[x][y - 1] == '$')
	{
		count++;
	}

	return count;
}
void spread(char mine[ROW][COL], char show[ROW][COL], const int x, const int y)   //չ������  
{
	int ret = 0;    int i = 0;    int j = 0;
	int a = x;    int b = y;

	if ((x >= 0)
		&& (x <= 9)
		&& (y >= 0)
		&& (y <= 9))
	{


		if (mine[x - 1][y - 1] == ' ')                        //�������������  
		{
			a = x - 1;
			b = y - 1;
			ret = mineNum(mine, a, b);                     //�����Ը�����Ϊ�����׵����� 

			if (ret == 0)                                 //������˸��������ĸ��������Χ8����������  

			{
				show[a][b] = ' ';                        //�����Χû���׾������չʾ�� ���ո�  
				mine[a][b] = '0';                        //�������е������Ϊ��0���ɷ��������  

				spread(mine, show, a, b);              //�������������긳ֵ��x��y���ٴν���չ��  

			}
			else
			{
				show[a][b] = '0' + ret;
				mine[a][b] = '0';
			}


		}

		if (mine[x][y - 1] == ' ')                                //���µ������߸�����ͬ��  
		{
			a = x;
			b = y - 1;
			ret = mineNum(mine, a, b);

			if (ret == 0)
			{
				show[a][b] = ' ';
				mine[a][b] = '0';
				spread(mine, show, a, b);
			}
			else
			{
				show[a][b] = '0' + ret;
				mine[a][b] = '0';
			}

		}

		if (mine[x - 1][y] == ' ')
		{
			a = x - 1;
			b = y;
			ret = mineNum(mine, a, b);
			if (ret == 0)
			{
				show[a][b] = ' ';
				mine[a][b] = '0';
				spread(mine, show, a, b);
			}
			else
			{
				show[a][b] = '0' + ret;
				mine[a][b] = '0';
			}

		}
		if (mine[x + 1][y - 1] == ' ')
		{
			a = x + 1;
			b = y - 1;
			ret = mineNum(mine, a, b);
			if (ret == 0)
			{
				show[a][b] = ' ';
				mine[a][b] = '0';
				spread(mine, show, a, b);
			}
			else
			{
				show[a][b] = '0' + ret;
				mine[a][b] = '0';
			}

		}

		if (mine[x + 1][y] == ' ')
		{
			a = x + 1;
			b = y;
			ret = mineNum(mine, a, b);
			if (ret == 0)
			{
				show[x + 1][y] = ' ';
				mine[a][b] = '0';
				spread(mine, show, a, b);
			}
			else
			{
				show[x + 1][y] = '0' + ret;
				mine[a][b] = '0';
			}
		}
		if (mine[x + 1][y + 1] == ' ')
		{
			a = x + 1;
			b = y + 1;
			ret = mineNum(mine, a, b);
			if (ret == 0)
			{
				show[x + 1][y + 1] = ' ';
				mine[a][b] = '0';
				spread(mine, show, a, b);
			}
			else
			{
				show[x + 1][y + 1] = '0' + ret;
				mine[a][b] = '0';
			}


		}
		if (mine[x][y + 1] == ' ')
		{
			a = x;
			b = y + 1;
			ret = mineNum(mine, a, b);
			if (ret == 0)
			{
				show[x][y + 1] = ' ';
				mine[a][b] = '0';
				spread(mine, show, a, b);
			}
			else
			{
				show[x][y + 1] = '0' + ret;
				mine[a][b] = '0';
			}
		}
		if (mine[x - 1][y + 1] == ' ')
		{
			a = x - 1;
			b = y + 1;
			ret = mineNum(mine, a, b);
			if (ret == 0)
			{
				show[x - 1][y + 1] = ' ';
				mine[a][b] = '0';
				spread(mine, show, a, b);
			}
			else
			{
				show[x - 1][y + 1] = '0' + ret;
				mine[a][b] = '0';
			}

		}

	}
}
void sweep_Mine(char mine[ROW][COL], char show[ROW][COL], int x, int y)   //ɨ�׺���  
{
	int ret = 0;

	if (mine[x][y] == ' ')      //���û�вȵ��ף���չʾ�������ܱߵ��������������Ϊ0����ʾ�ո�  
	{
		ret = mineNum(mine, x, y);
		if (ret == 0)
		{
			show[x][y] = ' ';


		}
		else
		{
			show[x][y] = '0' + ret;                           //�����ը������ʾը�������� 

		}
		spread(mine, show, x, y);                      //���ڴ˵���չ�����������ܱ��������չ�� 

	}
	else if (mine[x][y] == '$')
	{

		show[x][y] = mine[x][y];                             //�����Ҳȵ�ը������ʾ$

	}

}
void prevent_first_death(char mine[ROW][COL], int x, int y)      //��ֹ��ҵ�һ�α�ը��  
{
	int m = 0;    int n = 0;

	if (mine[x][y] == '$')
	{
		do
		{
			m = rand() % 11 + 0;
			n = rand() % 11 + 0;                  //�����Ҳȵ��ף����������һ��û���׵ĵط�����ը���ƶ�������  

			if (mine[m][n] == ' ')
			{
				mine[x][y] = ' ';             //������������Ϊ�ո�
				mine[m][n] = '$';
				break;
			}
		} while (1);
	}


}
int check_win(char mine[ROW][COL], char show[ROW][COL], int m)  //�ж���Ӯ  
{
	int i, j, num;
	num = M;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (show[i][j] == '*')                //�����չʾ������ʣ�� ��*����������������ͬ����ô�ͱ�ʾɨ�׳ɹ�      
			{
				num--;
			}
			else if (show[i][j] == '$')         //�����ʾ���ϳ����� ��$��˵����Ҳȵ�����
			{
				return 1;
			}
			else if (num == 0)
			{
				return 0;

			}
		}
	}    return -1;
}