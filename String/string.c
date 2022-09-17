#include <stdio.h>
#include <string.h>

int main(){

  char str[5];
  printf("Enter a string ? ");
  gets(str);
  printf("The string is = %s\n", str);
  
  int length = strlen(str);
  char str2[5];
  printf("The length of the string is = %d\n",length);

  strcpy(str2, str);
  printf("Copying the string to str2 gives =  %s\n", str2);
  
  (strcmp(str2, str) >= 0) ? printf("Strings are same") : printf("Strings are not same");       
  return 0; 
}
