#include <stdio.h>
#include <string.h>

int main (){
    int r,c,i;

    printf("Enter the no of strings and max word limit : ");

    scanf("%d %d", &r, &c);
    fflush(stdin);

    char string[r][c];

    printf("Enter the strings : \n");

    for (i=0; i<r; i++){
        fgets(string[i], c, stdin);
    }

    printf("\nThe strings are : \n");

    for (i=0; i<r; i++){
   printf("The string%d : %s\n", i+1, string[i]);
    }
   return 0;
}
