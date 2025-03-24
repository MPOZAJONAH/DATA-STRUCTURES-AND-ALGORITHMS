#include <stdio.h>
//Code to swap 2 numbers
int main(){
    int m,j;
    printf(" Please enter m; ");
    scanf("%d", &m);
    
    printf("\nPlease enter j; ");
    scanf("%d", &j);
    printf("\nBefore swap: ");
    printf("\n m = %d, and j = %d ",m,j);
    int temp = m;
    m = j;
    j = temp;
    printf("\nAfter swap: ");
    printf("\n m = %d, and j = %d ",m,j);
    
}
