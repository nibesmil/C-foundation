#include <stdio.h>

struct student {
    int num;
    char name[20];
    double grd;
};

int main(void){

    struct student s = {1, "임세빈", 4.1};
    struct student* p;

    p = &s;

    printf("학번 : %d\n이름 : %s\n학점 : %.2f\n", s.num, s.name, s.grd);
    printf("학번 : %d\n이름 : %s\n학점 : %.2f\n", (*p).num, (*p).name, (*p).grd);
    printf("학번 : %d\n이름 : %s\n학점 : %.2f\n", p->num, p->name, p->grd);

    return 0;
}
