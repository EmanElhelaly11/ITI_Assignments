#include <stdio.h>

void main() {
    int realId=12249;
    int password= 123;

    int id,pass;
   
    printf("Enter ID: ");
    scanf("%d", &id);
   
    printf("Enter Password: ");
    scanf("%d", &pass);
   
   if(id==realId && pass==password){
        printf("Eman");
   }else if(id!=realId) {
        printf("Incorrect ID");
   }else{
        printf("Incorrect Password");
   }
}
