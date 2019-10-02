/*
*   Семевский Егор 
*
*/

#include <stdio.h>

int num = 20;
int op = 0;


void calc(){
    if(num != 0) {

        if(num % 3 == 0){
            num = num / 3;
            op++;
            printf("\n");
        printf("%d : %d", op, num);
            calc(num);

        } else {
            num = num - 1;
            op++;
            printf("\n");
        printf("%d : %d", op, num);
            calc(num);
        }

    } else {
        printf("\n");
        printf("%d : %d", op, num);
    }
    

}

void func(int n) {

 if (n != 0) {
     func(n / 2);
 } else  {
     return;
 }

 printf("%d", n % 2);
 return;    
}


 int power(int x, int n)
 {
    if (n==0)
        return 1;
    else if (n==1)
        return x;
    else if (n % 2 == 0 )
        return power( x * x, n/2);
    else
        return power( x * x, n /2)*x;
 }

int pwr (int m, int e)
{
    int temp;
    temp = 1;

    for( ; e; e--) {
        temp = temp * m;
    }

    return temp;
}




int main () {
    func(212) ;  
    printf("\n");
    printf("%d",power(2,8));
    printf("%d", pwr(2,4));
    calc();
    return 0;
}