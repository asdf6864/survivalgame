#pragma warning(disable:4996)
#include<iostream>
#include<Windows.h>

#define STAGE_WIDTH 35
#define stat_Height 10

void setCursorPosition2(int x, int y); //Ŀ�� ��ġ ����
void CommunicationBoxNPC(int flag); //NPC ���� �ڽ�

int main() {
	CommunicationBoxNPC(1); 

	//CommunicationBoxNPC(0);
	//���� �Լ����� ȣ�� x
	//npc �ٷ�� �Լ����� ȣ��
}
void setCursorPosition2(int x, int y) {
	COORD pos = { x,y };
	HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOut, pos);
	CONSOLE_CURSOR_INFO curCursorInfo;
	GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
	curCursorInfo.bVisible = 0;
	SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
}
void CommunicationBoxNPC(int flag) {
	//npc ���� ���°� �ƴϸ� �ڽ� ����
	if (flag == 0) {
		setCursorPosition2(STAGE_WIDTH * 2 + 4, stat_Height + 1);
		printf("                                        ");
		for (int i = 0; i < 7; i++) {
			setCursorPosition2(STAGE_WIDTH * 2 + 4, stat_Height + 2 + i);
			printf("                                     ");
		}
		setCursorPosition2(STAGE_WIDTH * 2 + 4, stat_Height + 8);
		printf("                                             ");
		return;
	}
	//npc ���� �����̸� �ڽ� ����
	setCursorPosition2(STAGE_WIDTH * 2 + 4, stat_Height + 1);
	printf("������������������������������������������������������");
	for (int i = 0; i < 7; i++) {
		setCursorPosition2(STAGE_WIDTH * 2 + 4, stat_Height + 2 + i);
		printf("��                         ��");
	}
	setCursorPosition2(STAGE_WIDTH * 2 + 4, stat_Height + 8);
	printf("������������������������������������������������������");
}