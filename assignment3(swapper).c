#include <stdio.h>
//#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    }
int main() {
    int m, j;
    printf("Please enter any number m: ");
    scanf("%d", &m);
    printf("Please enter any number j: ");
    scanf("%d", &j);
    printf("Before swap: m = %d, j = %d\n",m,j);

    swap(&m, &j);

    printf("After swap: m = %d, j = %d\n", m, j);

    return 0;
    }