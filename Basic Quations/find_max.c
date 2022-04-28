///WAP to program to find max of numbers using function

#include<stdio.h>
int max_of_four(int a,int b,int c,int d)
{
    int max =a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    return max;
}


int main()
{
    int a,b,c,d,ans;
    printf("Enter the 4 number to find max: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    ans=max_of_four(a,b,c,d);
    printf("%d",ans);
    return 0;
}





////////////////////////////////
///alternative

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int a, int b) {
    // this is a ternary operator 
    // conditional ? return value if true : return value if false
    return a > b ? a : b;    
}

int max_of_four(int a, int b, int c, int d) {
    return max(a, max(b, max(c, d)));
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
