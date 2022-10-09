#include<stdio.h>
#include <string.h>

int main (){
    char city[10][30];
    char temp [30];
    int i,j;

    for(i=0; i<10; i++){
   printf("Enter the name of the city%d : ", i+1);
   gets(city[i]);
   }

for(i=0; i<9; i++){
    for (j=i+1; j<10 ; j++){
      if ( strcmp (city[i],city[j]) > 0){
        strcpy (temp,city[i]);
        strcpy (city[i], city[j]);
        strcpy (city[j], temp);
      }
    }
}
for (i=0; i<10; i++){
    printf("%s \n", city[i]);
}

    return 0;
}