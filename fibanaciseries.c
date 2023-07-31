#include<stdio.h>
int main(){
    int a,b,c,n;
    printf("enter the number of series:");
    scanf("%d",&n);
    printf("enter the first two numbers:");
    scanf("%d %d",&a,&b);
    printf("%d %d",a,b);
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d/t",c);
    }
}
