#include <stdio.h>
int main() {
    char str[100],cstr[100]; 
    int i,len=0;
    printf("Enter a string: ");
    gets(str);
    while (str[len]!=0){
        len++;
    }
    while(str[i]!=0){
        cstr[i]=str[i];
    }
//    for (i = 0; i< len/2; i++){
////        char text=str[i];
     //   str[i]=str[len-i-1];
 ////       str[len-i-1]=text;}
    
    for (i = 0; cstr[i] != '\0'; i++) {
        printf("%s",cstr[i]);
       //   if(cstr[i]=str[i]){
      //  printf("it is a palindrome");
    }
 //   else {
  //      printf("it is not a palindrome");
  //  }}
return 0;
}