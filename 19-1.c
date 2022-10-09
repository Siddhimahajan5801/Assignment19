#include <stdio.h>
#include <string.h>

int main(){
    char str[5][30];
    int i,j,count=0;

    for(i=0; i<5; i++){
   printf("Enter your string%d : ", i+1);
   gets(str[i]);
   }

for(i=0; i<5; i++){
    for (j=0; str[i][j] != '\0'; j++){
      if (str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U' )
      count++;
    }
    printf("The number of vowels in string%d is : %d \n ",i+1, count);
    count=0;
}

return 0;
}
