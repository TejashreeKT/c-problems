#include <stdio.h>
#include <string.h>
char palindrome(char *c,char *d){
if(c==d){
   printf("yes");
}
}
int main (){
char x[50]="sky",y=strlen(x);

for (int i=0;i<y;i++){
palindrome(&x[i],&x[y-1]);
y--;}}


