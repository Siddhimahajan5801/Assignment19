#include <stdio.h>
#include <string.h>

int palindrome (char *a){
    int count=0;
   int l=strlen(a);

   for (int i=0; i<l/2; i++){
    if (a[i]==a[l-1-i])
        count++;
   }
   if (count==l/2)
    return 1;
}


int main (){
char string[5][20];
int p;

printf("Enter the strings : \n");
for (int i=0; i<5; i++){
    gets(string[i]);
}

printf("\nIn the given strings the palindrome strings are : \n");
for (int i=0; i<5; i++){
    p=palindrome(string[i]);

    if (p==1){
        printf("%s\n",string[i] );
    }
    p=0;
}

   return 0;
}
