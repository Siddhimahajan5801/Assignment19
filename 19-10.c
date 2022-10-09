#include<stdio.h>
#include<string.h>

int main (){
    char username[20];
    char password[6],ch;
    int i, response;

   printf("Welcome\n\n");

   printf("Enter your user name : \n");
   fgets(username,20,stdin);
   printf("Enter your password of 6 characters : \n");

   for (i=0; i<6; i++){
    ch= getchar();
    password[i]=ch;
    ch='*';
    printf("%c",ch);
   }
   password[i]='\0';

   fflush(stdin);
   printf("\nDo you want to see your password ?\nPress 1 for 'yes' and 0 for 'no'\n");
   scanf("%d", &response);

   if (response==1){
    printf("\nyour password is : \n");
    for (i=0; i<6; i++){
        printf("%c", password[i]);
    }
   }

   return 0;

}
