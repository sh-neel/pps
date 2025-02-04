#include<stdio.h>
#define P printf
#define S scanf
int main(){
    char input;

    P("enter input: ");
    S("%c",&input);

    int ascii;
    ascii=input;
    if(ascii>=48 && ascii<=57){
        P("number=%d",ascii); 
    }
    else if(ascii>=65 && ascii<=90){
        P("capital latter=%d",ascii);
    }
    else if(ascii>=97 && ascii<=122){
        P("small latter=%d",ascii);
    }
    else{
        P("special characeter=%d", ascii);
    }

}