#include<stdio.h>
#include<stdbool.h>
#include<string.h>

// In c use use int, bool, before function decaration, depending upon what it is returning int type, boolean type as a Output.
int evenNum(int a){
    if(a%2 ==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    bool result = evenNum(4);
    printf("result :");
    if(result){
        printf("Number is even \n");
    }
    else{
        printf("Number is not Even \n");
    }

};