#include <stdio.h>
void swap (int x , int y);
main(){
    swap(2,3);
}
void swap(int x , int y){
    int temp ;
    x=y;
    y=temp;
    printf("x and y are %d%d\n",x,y);
}
