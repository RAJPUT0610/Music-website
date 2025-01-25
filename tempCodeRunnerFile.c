#include<stdio.h>
int fac(int n){
     if(n==1){
       return 1;
    }
    int facatorial=fac(n*(n-1));
    printf("%d",factoial);
}
int main(){
    int n;
    printf("enter a numbers:");
    scanf("%d",&n);
    fac(n);

}