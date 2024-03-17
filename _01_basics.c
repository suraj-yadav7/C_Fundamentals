#include<stdio.h>
// string.h used for string datatypes
#include<string.h>

/*
int main()
{
    printf("hello world");
    return 0;
}
*/

// Decalring varaibles and printing there output
/*
int main()
{
    int num =7;
    float float_val=3.14;
    char *str="Salaar";
    printf("Integer number: %d\n", num);
    printf("float value: %f\n", float_val);
    printf("Char val: %c\n",str );
    return 0;
}
*/

// Taking Input from user
/*
int main(){
    int emp_id;
    printf("Enter your employee id ");
    scanf("%d", &emp_id);
    printf("User EmpID is:: %d\n", emp_id);
    return 0;
};
*/
// sum of integer through input
/*
int main(){
    int a;
    int b;
    printf("Enter a value : ");
    scanf("%d",&a);
    printf("Enter b value : ");
    scanf("%d", &b);
    printf("Sum of two integer value is: %d", a+b);
    return 0;
}
*/
// Area of Circle
/*
int main(){
    int radius;
    float pi=3.14;
    printf("Enter a radius of circle: ");
    scanf("%d", &radius);
    float areaOfCircle = (pi*(radius*radius));
    printf("Area of circle is   %f", areaOfCircle);
    return 0;
}
*/

// Type Declaration Instructions -> declaring variable
/*
int main(){
    int a=22;
    int b=a;
    int c=b+1;
    // here d is initialised with value 5 and e is declared as integer variable
    int d=5,e;
    e=9;
    int x,y,z;
    x=y=z=7;
    int m=11, n=16;
    printf("Given value: %d %d", m,n);
    return 0;
}
*/

// Type Arithmetic Instructions
/*
int main(){
    int a=5; 
    float b=10;
    int sum = a+b;
    int sub=a-b;
    int mul = a*b;
    float div = a/b;
    int modules = a%2;

    int x = 1.9999999;

    printf("Arithmetic operations: %d", x);
    return 0;
}
*/
// Operator precedence (*, /,%)= higher precedence ( +, -,) + second higher precendences, = final this
// Associativity (for same precedence)
// here * are present on both side, left -> right precedence will be followed
int main(){
    int x = 4*3/6*2;
    // here ((4*3)/6)*2 this how calculation is done.
    int y= 5+2/2*3;
    // here  5+((2/2)*3) = 8, bcz / and * has same precedence
    printf("Value is :: %d", y);
    return 0;
}
