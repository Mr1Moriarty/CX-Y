#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void meun()
{
	printf("************************\n");
	printf("*****    1.play    *****\n");
	printf("*****    0.exit    *****\n");
	printf("************************\n");
}

void game()
{
	//�����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//��ʾ�׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//PrintBoard(mine, ROW, COL);
	PrintBoard(show, ROW, COL);
    //������
	SetMine(mine, ROW, COL);
	//PrintBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("��ѡ�����֣�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}

	} while (input);

}

int main()
{
	test();
	return 0;
}