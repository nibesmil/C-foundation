#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *list;
    int i, students, sum = 0;

    printf("학생 수를 입력하세요 : ");
    scanf("%d", &students);

    list = (int *)malloc(sizeof(int));

    if(list == NULL) {
        printf("동적 메모리 할당 오류");
        exit(1);
    }

    for(i = 0; i < students; i++) {

        printf("학생 # %d 성적 : ", i+1);
        scanf("%d", &list[i]);
    }
    for(i = 0; i < students; i++)
        sum += list[i];
    
    printf("성적 평균 : %.2f\n", (double)sum/students);

    free(list);

    return 0;


}
