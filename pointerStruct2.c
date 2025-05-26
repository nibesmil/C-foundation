#include <stdio.h>
#include <stdlib.h>

struct date{
    int month;
    int day;
    int year;
};

struct student {
    int num;
    char name[20];
    char grd;
    struct date* dob;
};

int main(void){

    struct date d = {9, 17, 2001};
    struct student s = {20201092, "임세빈", 4.1};

    s.dob = &d;

    printf("학번 : %d\n이름 : %s\n, 학점 : %.2f\n", s.num, s.name, s.grd);
    printf("생년월일 : %d. %d. %d", s.dob -> year, s.dob -> month, s.dob -> day);

    return 0;
}
