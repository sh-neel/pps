#include <stdio.h>
#define P printf
#define S scanf

int main(){

    int a,b;
    int ans1,ans2,ans3;
    float ans4;

    P("enter value of a: ");
    S("%d",&a);
    P("\n enter value of b: ");
    S("%d",&b);
    ans1 = a+b;
    P("\n addition=%d",ans1);
    if(a>b){
    ans2 = a-b;
    P("\n substraction=%d",ans2);
    }
    else{
    ans2 = b-a;
    P("\n substraction=%d",ans2);
    }
    ans3 = a*b;
    P("\n multipication=%d",ans3);
    ans4 = a/b;
    P("\n division=%f",ans4);

}
