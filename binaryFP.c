#include <stdio.h>
#define SIZE 5

int main(void) {

    int i;
    int buffer[SIZE];
    FILE* fp = NULL;

    fp = fopen("binary.bin", "rb");

    if(fp == NULL) {
        fprintf(stderr, "binary.bin 파일 읽을 수 없음");
        return -1;
    }
    fread(buffer, sizeof(int), SIZE, fp);

    for(int i = 0; i < SIZE; i++){
        printf("%d", buffer[i]);
    }

    fclose(fp);

    return 0;
}
