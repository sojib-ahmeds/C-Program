#include<stdio.h>
int main(){
int number;
printf("Enter your Number :");
scanf("%d",&number);

if(number % 2 ==0){
    printf("%d Number Is Even ",number);
}
else{
     printf("%d Number Is Odd",number);
}

return 0;
}
