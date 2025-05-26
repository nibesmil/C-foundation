#include <stdio.h>
#include <string.h>

struct student{
    
    int num;
    char name[10];
    double grd;
};

int main(void){
    
    struct student s;
    
    s.num = 20201092;
    strcpy(s.name, "임세빈");
    s.grd = 4.06;
    
    printf("학번 : %d\n", s.num);
    printf("이름 : %s\n", s.name);
    printf("성적 : %.2f\n", s.grd);
    
    return 0;
}
