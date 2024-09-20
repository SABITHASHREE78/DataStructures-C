#include <stdio.h>

int main() {
 int n,a[50],i,j,t=0,s=0;
 scanf("%d",&n);
 for(i=0;i<n-1;i++){
     scanf("%d",&a[i]);
 }
 for(i=a[0];i<=a[n-2];i++){
     t=t+i;
 }
 for(i=0;i<n-1;i++){
     s=s+a[i];
 }
 printf("%d",t-s);
 return 0;
}
 
 
