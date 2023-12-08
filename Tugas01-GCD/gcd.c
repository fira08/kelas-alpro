#include <stdio.h>
int main (){
 int x,y,z;
 printf(" masukkan nilai x: ");
 scanf("%d", &x);
 printf(" masukkan nilai y: ");
 scanf("%d", &y);

while (y!=0){
    z=y;
    y=x%y;
    x=z;
}
printf(" GCD : %d", x);
return 0; 
}