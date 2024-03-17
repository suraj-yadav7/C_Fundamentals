#include<stdio.h>

// Operators in c
/*
// Arithmetic Operators +,-,/,%
float arithmeticOperator (float a, float b){
    float output = a/b;
    return output;
}

int main(){
    float result = arithmeticOperator(5,4);
    printf("Aritmetic operations %f\n",result);
}
*/

// Relational Operators ==,>,>=,<,<= !=
int relationalOperator(int a, int b){
    if(a==b){
        return 1;
    }
    else{
        return 0;
    }
}



// Logical operator  &&, ||, !
int logicalOperator(int x){
    int y=25;
    int z=15;
    if(x>z && x<y){
        printf("X satisfies the condition %d\n", x);
    }
    else{
        printf("X Doesn't satisfies the condition %d\n", x);
    }
}

// Pointers
int pointerFun(){
    int val =46;
    int *ptr = &val;
    printf("Original val: %d\n", val);
    printf("Original variable address val: %d\n", ptr);
    printf("Pointer val: %d\n", *ptr);
}

int main(){
    int result1 = relationalOperator(3,3);
    printf("Relational Operator %d\n", result1);
    int result2=logicalOperator(20);

    pointerFun();
}
