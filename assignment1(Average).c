#include <stdio.h>
int main(){
    int MathAssignment, MathCW, MathMidTerm, MathEndTerm, MathTotal, AvMath;
    int PhysicsAssignment, PhysicsCW, PhysicsMidTerm, PhysicsEndTerm, PhysicsTotal, AvPhysics;
    int ChemistryAssignment, ChemistryCW, ChemistryMidTerm, ChemistryEndTerm, ChemistryTotal, AvChemistry;
    printf("\nPlease enter your marks to calculate your average mark below \n");
    printf("Math Assignment: ");
    scanf("%d", &MathAssignment);
    printf("\nMath Course work: ");
    scanf("%d", &MathCW);
    printf("\nMath Mid Term: ");
    scanf("%d", &MathMidTerm);
    printf("\nMath End Term: ");
    scanf("%d", &MathEndTerm);
    MathTotal= MathAssignment+MathCW+MathMidTerm+MathEndTerm;
    printf("\nThe average for Math is %d\n",AvMath=MathTotal/4);

    //physics results prompter

     printf("\nPhysics Assignment: ");
    scanf("%d", &PhysicsAssignment);
    printf("\nPhysics Course work: ");
    scanf("%d", &PhysicsCW);
    printf("\nPhysics Mid Term: ");
    scanf("%d", &PhysicsMidTerm);
    printf("\nPhysics End Term: ");
    scanf("%d", &PhysicsEndTerm);
    PhysicsTotal= PhysicsAssignment+PhysicsCW+PhysicsMidTerm+PhysicsEndTerm;
    printf("\nThe average for Physics is %d\n",AvPhysics=PhysicsTotal/4);
    
    //Chemistry results calculator

     printf("\nChemistry Assignment: ");
    scanf("%d", &ChemistryAssignment);
    printf("\nPhysics Course work: ");
    scanf("%d", &ChemistryCW);
    printf("\nChemistry Mid Term: ");
    scanf("%d", &ChemistryMidTerm);
    printf("\nChemistry End Term: ");
    scanf("%d", &ChemistryEndTerm);
    ChemistryTotal= ChemistryAssignment+ChemistryCW+ChemistryMidTerm+ChemistryEndTerm;
    printf("\nThe average for Chemistry is %d",AvChemistry=ChemistryTotal/4);
    int Overall=AvMath+AvChemistry+AvPhysics;
    int AvOverall=Overall/3;
    printf("\nThe Overall Average for all subjects %d", AvOverall);



}