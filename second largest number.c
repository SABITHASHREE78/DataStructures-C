#include <stdio.h>
int main(){
    int a[50],n,i,j,t;
    printf("enter the array size :");
    scanf("%d",&n);
    printf("enter the array elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
        printf("\n%d",a[n-2]);
    
        return 0;
    }
