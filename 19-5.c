#include <stdio.h>
#include <string.h>

int main (){
char email[5][20];
int i, j, flag[5];

printf("Enter the email addresses : \n");
for (i=0; i<5; i++){
    gets(email[i]);
}

for (i=0; i<5; i++){
    for (j=0; email[i][j] != '\0'; j++){

        if (email[i][j]=='@'){
            flag[i]=1;
        }
    }
}
    printf("\nThe odd email addresses are : \n");
    for (i=0; i<5; i++){
    if (flag[i]!=1){
        printf ("%s \n", email[i]);
     }
}
    return 0;
}
