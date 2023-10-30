#include <stdio.h>

int main(void) {
  int a[]={12,2,6,77,6,7,9,3};
  void findMaxMin(int [],int,int *,int *);
  void findMaxMin2(int [],int ,int ,int );
  int maximum,minimum;
  //findMaxMin(a,8,&maximum,&minimum);
  findMaxMin2(a,8,maximum,minimum);

  printf("max=%d and min=%d\n",maximum,minimum);
  return 0;
}


void findMaxMin(int x[],int n,int *max,int *min){
  *max=x[0];
  *min=x[0];
  for(int i=1;i<n;i++){
     if(x[i]>*max)
       *max=x[i];
     else if(*min>x[i])
       *min=x[i];
    }
}
void findMaxMin2(int x[],int n,int max,int min){
  max=x[0];
  min=x[0];
  for(int i=1;i<n;i++){
     if(x[i]>max)
       max=x[i];
     else if(min>x[i])
       min=x[i];
    }
}