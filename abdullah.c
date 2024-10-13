#include<stdio.h>
int main(){
    int a=10;
    // printf("%d\n",a);
    // int b=printf("%d\n",a);
    // printf("%d\n",b);
    //10 - 9 - 8 + 9 - 10-1
    printf("%d",a-- - a-- - a++ + a++ - a--);
    return 0;
}