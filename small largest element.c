#include <stdio.h>
int main(){
    int a[50],n,i,j,b,t;
    printf("enter the array size :");
    scanf("%d",&n);
    printf("enter the array elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("enter the key value :");
    scanf("%d",&b);
    for(i=n-1;i>=0;i--){
        if(a[i]<b){
            printf("%d the small of largest element",a[i]);
            break;
        }
    }
    return 0;
}
