#include <stdio.h>

int main() {
   
   int i,number;
   i=1;
   number=0;
   
   printf("enter a number from 1 to 10:\n");
   scanf("%d",&number);
    
    if (number < 0 || number > 10) {
        printf("please don't do that");
        return 0;
    }
    while (i<=10){
        
        printf("%d x %d = %d \n",number,i,number*i);
        i++;
    }
    

    return 0;
}