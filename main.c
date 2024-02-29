#include<stdio.h>
int main(){
int year;
printf("Enter Your year :");
scanf("%d",&year);
if(year % 400 == 0){
    printf("%d is leep Year. ",year);
}
else if(year % 100 ==0){
    printf("%d is not leep Year. ",year);
}
else if(year % 4 == 0){
    printf("%d is leep Year. ",year);
}
else {
    printf("%d is not leep Year. ",year);
}
return 0;
}
