#include <stdio.h>
int main(){
    char c ;
    scanf("%c",&c);
    if (ch>='a' && ch<= 'z' || ch>='A' && ch<='Z'){
        if (ch=='a' || ch=='A' || ch=='e'|| ch=='E' || ch=='i' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
        printf("Vowel");
        }
        else{
            printf("Consonant");
        }
        
    }
    else{
        if(ch>='0' && ch<='9'){
            printf("Digit");
        }
        else{
            printf("Special Character");
        }
    }
    return 0;
}
