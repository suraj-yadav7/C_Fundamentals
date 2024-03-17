#include<stdio.h>

//1. Find largest number from three number
void largestNum(int num1, int num2, int num3){
    if(num1>num2 && num1 >num3){
        printf("Num1 is largest number %d\n", num1);
    }
    else if (num2>num1 && num2>num3){
        printf("num2 is largest number %d\n",num2);
    }
    else{
        printf("num3 is largest number %d\n", num3);
    }

}

// 2.Reverse a given number
void reverseNum(int num){
    int rev=0;
    int remainder;
    int n = num;
    while(n !=0){
        remainder = n%10;
        rev = rev*10+remainder;
        n = n/10;
    }
    printf("Original Number is : %d\n", num);
    printf("Reverse of number is %d \n", rev);
}

// 3.Addition of Two matrix
void add2Matrix(){
    int rows,cols;
    printf("Enter Number of rows: ");
    scanf("%d",&rows);
    printf("Enter Number of cols: ");
    scanf("%d", &cols);
    printf("\n");
    int a[rows][cols], b[rows][cols], c[rows][cols];
    // looping through matrix
    for(int i=0; i<rows; i++ ){
        for(int j=0; j<cols; j++){
            printf("Enter 1st matrix value a[%d] [%d] : ", i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<rows; i++ ){
        for(int j=0; j<cols; j++){
            printf("Enter 2nd matrix value b[%d] [%d] : ", i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<rows; i++ ){
        for(int j=0; j<cols; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition of matrix is: \n");
    for(int i=0;i<rows; i++){
        for(int j=0; j<cols; j++){
        printf("%d \t ", c[i][j]);
        }
        printf("\n"); 
    }

}

// scan diff input from user
void scanUserInput(){
    // int a;
    // printf("Enter a Integer value: ");
    // scanf("%d", &a);
    // printf("Integer Value: %d\n",a);

    // float b;
    // printf("Enter a float value: \n");
    // scanf("%f", &b);
    // printf("Float Value: %f\n",b);

    // char ch;
    // printf("Enter a Character value:\n ");
    // scanf("%c", &ch);
    // printf("Char Value: %c\n",ch);

    // printf("beep sound \a");

    // pointers
    int x =20;
    int *ptr =&x;
    printf("Original Value: %d\n", x);
    printf("Pointer reference Value: %d\n", *ptr);

}

void multiplication(){
    int row1,col1,row2,col2;
    int sum=0;
    int a[row1][col1], b[row2][col2], mul[row1][col2];
    printf("Matrix multiplication");
    printf("Enter no of row and cols for matrix 1: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter no of row and cols for matrix 2: ");
    scanf("%d %d", &row2, &col2);
    printf("\n");

    if(col2==row1){
    for(int i=0; i<row1;i++){
        for(int j=0;j<col1;j++ ){
            printf("Enter martix 1 val[%d][%d]: ",i,j);
            scanf("%d ", &a[i][j]);
        }
    }

    for(int i=0; i<row2;i++){
        for(int j=0;j<col2;j++ ){
            printf("Enter martix 1 val[%d][%d]: ",i,j);
            scanf("%d ", &b[i][j]);
        }
    }

    
    }
    else{
        printf("matrix is not possible with given rows and colums [%d][%d]", col1,row2);
    }
}


int main(){
//Lab programs
//1. Find largest number from three number
// largestNum(45,15,10);

// 2.Reverse a given number
// reverseNum(2345);

// 3.Add Two matrix
// add2Matrix();

// scanUserInput();

// multiplication of two matrix
multiplication();
return 0;
}
