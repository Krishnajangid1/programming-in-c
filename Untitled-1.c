#include<stdio.h>
int main(){
    int a[] = [5,3,8,1,2];
    int n = 5,i,j,min,temp;
    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n-1;j++){
            if(a[j]<a[min])
            min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        }
        for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}