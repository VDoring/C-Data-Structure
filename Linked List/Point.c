//95p
#include <stdio.h>
#include "Point.h"

//값 저장
void SetPointPos(Point *ppos, int xpos, int ypos)
{
	ppos->xpos = xpos;
	ppos->ypos = ypos;
}

//정보 출력
void ShowPointPos(Point *ppos)
{
	printf("[%d, %d] \n", ppos->xpos, ppos->ypos);
}

//비교
int PointComp(Point * pos1, Point *pos2)
{
	//두 Point 변수의 맴버가 모두 같으면 0 반환
	if (pos1->xpos == pos2->xpos && pos1->ypos && pos2->ypos)
		return 0;
	//두 Point 변수의 xpos만 같으면 1 반환
	else if (pos1->xpos == pos2->xpos)
		return 1;
	//두 Point 변수의 ypos만 같으면 2 반환
	else if (pos1->ypos == pos2->ypos)
		return 2;
	//두 Point 변수의 맴버가 모두 다르면 -1 반환
	else
		return -1;
}