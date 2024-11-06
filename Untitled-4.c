#include <stdio.h>

int main() {
    int c=0,f=0,b=0,s,x,i
    printf("enter a string: ");
    scanf("%s",&s);
    for (int i=0;s[i]!='\0';i++){
        if(i =="a" || i =="e" || i =="i" || i =="o" || i =="u"){
            c++;
        }
        else if(i ==" "){
            b++;
        }
        else{
            f++;
        }}
        printf("Number of vowels are: %d",c);
        printf("Number of consonants are: %d",f);
        printf("Number of Spaces are: %d",b);
    
    return 0;
}
