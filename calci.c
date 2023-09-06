#include <stdio.h>
int main(){
    float x,y;
    printf ("enter value of x=");
    scanf("%f" , &x);
    printf("enter value of y=");
    scanf("%f" , &y);
    float final;
    int final_int;
    int oscar;
    printf ("choose 1 for additon, 2 for subtraction, 3 for multipication , 4 for division, 5 for remainder = ");
    scanf ("%d" , &oscar);
    if(oscar==1){
       final = x + y;
       printf("your answer is %f", final);
    } else if(oscar==2){
        final = x - y;
        printf("your answer is %f", final);
    } else if(oscar==3){
        final = x / y;
        printf("your answer is %f", final);
    } else if(oscar==4){
        final = x * y;
        printf("your answer is %f", final);
    } else if(oscar==5){
        final_int = (int)x%(int)y;
        printf("your answer is %d", final_int);
    } else {
        printf("invalid choice");
    }
        
    return 0;
}  
    