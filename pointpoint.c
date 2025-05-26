#include <stdio.h>
#include <math.h>

struct point{

    int x;
    int y;
};

int main(void){

    struct point p1, p2;
    int xdiff, ydiff;
    double dist;

    printf("점의 좌표를 입력하세요 : ");
    scanf("%d, %d", &p1.x, &p1.y);

    printf("점의 좌표를 입력하세요 : ");
    scanf("%d, %d", &p2.x, p2.y);

    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));

    printf("두 점 사이 거리 : %f", dist);

    return 0;
}
