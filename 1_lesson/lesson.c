#include <stdio.h>
#include <math.h>


void h_and_w (float h, int w) {
    printf("height: %f, widgth : %i \n", h, w);
    float i;
    i = w / (h * h);
    printf("index: %f \n ", i);

}

void switch_int (int a, int b) {
     printf("a: %d, b : %d \n", a ,b);
     a = a + b;
     b = a -b;
     a = a -b;
     printf("a: %d, b : %d \n", a ,b);

}
void equation(int a, int b, int c) {
    int D;
    D = (b*b) - (4*a*c);
    if (D<0) {
        printf("equation hasnt roots\n");
    } else if(D=0) {
        printf("equation has one root\n");
        int x;
        x = -b/2*a;
        printf("x: %d" , x);
    } else {
        printf("equation has two roots\n");
        int x1;
        int x2;
        x1 =  -b + sqrt(D)/2*a;
        x2 =  -b - sqrt(D)/2*a;
        printf("x1: %d, x2: %d", x1,x2);

    }
}

void years(){
    int year, t1, t2 ,i=0;
    scanf("%d",&year);
    t1 = year % 10;
    t2 = year % 100;
    if(t1 == 1 && t2 != 11) {printf("%d год \n",year);i++;}
    if(t1 >= 2 && t1 <= 4 && (t2 < 10 || t2 >= 20)) {printf("%d года \n",year);i++;}
    if(i==0) {printf("%d лет \n",year);}
}

void chess(int x1, int y1, int x2, int y2) {
    if(((x1+y1)%2 == (x2+y2)%2)) {
        printf("Одного цвета\n");
    } else {
        printf("Разного цвета\n");
    }
}

void delenie(int n, int k){
    int h = 0;
    if(n>0 && k>0){
        while(n>=k){
            h += 1;
            n = n-k;
        }
    int o = n;
    printf("Остаток : %d, Частное : %d \n", o, h);
    }
}


 void d10(int n) {
     int r;
     while(n != 0 && ((r+1 %2) != 0)){
         r = n % 10;
         n = n / 10;
         printf("False\n");
     }
     printf("True\n");
 } 

void automorf(){
    int d;
    int x;
    d = 10;
    for(x = 1; x <= 1000000; x++){
        while (d<=x)
        {   
            d = d*10;
            if((x*x)%d == x ){
                printf("x: %d", x);
            }
        }
        
    }
}


int main () {
    h_and_w(1.80, 85);
    switch_int(10, 5);
    equation(3, 5 ,15);
    years();
    chess(2,2,6,6);
    delenie(10, 5);
    d10(145);
    automorf();
    return 0;
}