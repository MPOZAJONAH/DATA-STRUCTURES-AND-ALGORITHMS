#include <stdio.h>
#include <string.h>
//program to merge and print two arrays
int main(){
    int i,j;
    char DomesticAnimals[3][10];
    char WildAnimals[3][10];
    char animals[2][3][10];
    printf("Enter domestic animal 1: ");
    scanf("%s", &DomesticAnimals[0]);
     strcpy(animals[0][0],DomesticAnimals[0]);
    printf("Enter domestic animal 2: ");
    scanf("%s", & DomesticAnimals[1]);
     strcpy(animals[1][0],DomesticAnimals[1]);
    printf("Enter domestic animal 3: ");
    scanf("%s", & DomesticAnimals[2]);
     strcpy(animals[0][1],DomesticAnimals[2]);
    printf("Enter wild animal 1: ");
    scanf("%s", &WildAnimals[0]); 
     strcpy(animals[1][1], WildAnimals[0]);
    printf("Enter wild animal 2: ");
    scanf("%s", &WildAnimals[1]);
    strcpy(animals[0][2],WildAnimals[1]);
    printf("Enter wild animal 3: ");
    scanf("%s", &WildAnimals[2]);
    strcpy(animals[1][2],WildAnimals[2]);

    //a loop to print the merged array
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%s ",animals[i][j]);
        }
        printf("\n");
    }
    return 0;
}