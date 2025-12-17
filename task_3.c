#include <stdio.h>

//Alphbat Skipper
int main() {
    char c='a';
    while(c<='z'){
        printf("%c ", c);
        c=c+4;
    }
    return 0;

}

// digit counter
int main() {
    int n;
    int num=0;
    printf("Enter a integer: ");
    scanf("%d",&n);
    
    do{
        n/=10;
        ++num;
    }
    while(n!=0);
    printf("Number of digit is :%d",num);
    return 0;
 }
 
 //digit addition
int main() {
    int n,f_digit,l_digit;
    printf("Enter the number:");
    scanf("%d",&n);
    
    l_digit=n%10;
    
    while (n>=10){
        n=n/10;
    }
    f_digit=n;
    
    printf("SUM of FIRST and LAST digit is : %d",f_digit+l_digit);

    return 0;
}

