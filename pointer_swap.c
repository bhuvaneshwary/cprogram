#include <stdio.h>
void swap (int *a,int *b);

main(){
  int p=10;
  int q=20;

  printf("addresses of p and q before swapping p= 0x%x q= 0x%x\n",&p,&q);
  printf("p and q before swapping p= %d p= %d\n",p,q);
  swap(&p,&q);
  printf("p and q before swapping p= %d p= %d\n",p,q);
  printf("addresses of p and q after swapping p= 0x%x q= 0x%x\n",&p,&q);
    
}

void swap(int *a, int*b )
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;    
    printf("addresses of *a and *b inside swapping a= 0x%x b= 0x%x\n",a,b);
}
