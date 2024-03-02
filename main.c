#include<stdio.h>
long int fac(int n);
int main(){
int number;
long int result;
printf("Enter The Number :");
scanf("%d",&number);
result=fac(number);

printf("Result =%ld",result);
return 0;
}
long int fac(int n){
if(n>=1){
    return n*fac(n-1);
}
    else{
        return 1;
    }
}
