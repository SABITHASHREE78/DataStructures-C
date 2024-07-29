#include<stdio.h>
int main(){
    int n,a[50],i,b,c=0;
    printf("enter the size of the array :");
    scanf("%d",&n);
    printf("enter the array elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the key element :");
    scanf("%d",&b);
    for(i=0;i<n;i++){
        if(a[i]==b){
            printf("%d present in %d position",b,i+1);
            c=c+1;
            }
    }
            if(c==0){
                printf("not found");
            
    }
    return 0;
}
