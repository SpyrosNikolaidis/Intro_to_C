#include <stdio.h>
#include <stdlib.h>
void change_to_zero(int* aVarToChange);
void increment(int* aVar);
int main()
{
    int myVar=5;
    increment(&myVar);
    printf("Myvar now is %d\n",myVar);
    change_to_zero(&myVar);
    printf("Myvar finally is %d\n",myVar);
}

void change_to_zero(int* aVarToChange){
    *aVarToChange=0;
}
void increment(int* aVar){
    (*aVar)++;
}





