#include <stdio.h>

void main(){
int n1,n2,n3;

printf("Please Enter Number 1: ");
scanf("%d",&n1);

printf("Please Enter Number 2: ");
scanf("%d",&n2);

printf("Please Enter Number 3: ");
scanf("%d",&n3);

if(n1>=n2 && n1>=n3){
    printf("Maximum number is: %d",n1);
}else if(n2>=n1 && n2>=n3){
    printf("Maximum number is: %d",n2);
}else{
    printf("Maximum number is: %d",n3);
}

}