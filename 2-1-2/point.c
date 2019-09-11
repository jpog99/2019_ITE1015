#include <stdio.h>

typedef struct{
	int xpos;
	int ypos;
}Point;

Point getScale2xPoint(const Point* p){
	Point p2;
	p2 = *(p);
	p2.xpos *= 2;
	p2.ypos *= 2;
	return p2;
}

void swapPoints(Point* p1, Point* p2){
	Point temp;
	temp = *(p1);
	*(p1) = *(p2);
	*(p2) = temp;

}

int main(void){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	Point p1 = {a,b};

	printf("Calling getScale2xPoint()\n");
	printf("P1 : %d %d\n",p1.xpos,p1.ypos);
	Point p2 = getScale2xPoint(&p1);
	printf("P2 : %d %d\n",p2.xpos,p2.ypos);

	printf("Calling swapPoints()\n");
	swapPoints(&p1,&p2);
	printf("P1 : %d %d\n",p1.xpos,p1.ypos);
	printf("P2 : %d %d\n",p2.xpos,p2.ypos);

	return 0;
}
