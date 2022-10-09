#include<stdio.h>
#include <string.h>

int main (){
    int flag=0,i,j;
    char usernames[5][20]={"prateek","siddhi","nancy", "simran", "kunjan" };

    char username[20];
   printf("Enter the username : ");
   gets(username);


for ( i=0; i<5; i++){
      if ( strcmp (usernames[i],username ) == 0){
          printf("You are allowed to calculate factorial of a number!\n");

          int n, fact=1;
          printf("Enter a number whose factorial is to be calculated :");
          scanf("%d", &n);

          for (j=1; j<=n; j++){
            fact=fact*j;
          }
          printf("\nThe factorial of %d is : %d", n, fact);

          break;
          }
}
if (i==5)
printf("Error!");

return 0;
}
