#include<stdio.h>
#include <string.h>

int main (){
    char string[5][30];
    int flag=0;

    for(int i=0; i<5; i++){
   printf("Enter the string%d : ", i+1);
   gets(string[i]);
   }

for(int i=0; i<5; i++){
      if ( strcmp (string[i], "siddhi") == 0){
          printf("String found");
          break;
   }
   flag++;
}
    if (flag==5)
    printf("string not found ");

    return 0;
}
