#include<stdio.h>
#include<limits.h>
void merge(int a[], int p, int mid, int q){
    int L[100], R[100];
    int n1 = mid-p+1;
    int n2 = q-mid;
    int i,j,k;

    for(i=0;i<n1;i++)
     L[i] = a[p+i];

    for(j=0;j<n2;j++)
     R[j] = a[p+i];
    i=o;
    j=o;
    k=p;
    
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        a[k++]=L[i++];
    else
       a[k++]=R[j++];

    }
    while(i<n1)
      a[k++]=L[i++];

      while(j<n2)
        a[k++]=R[j++];
}

void mergesort(int a[], int p, int q)
{
    if(p<q)
    {
        int mid = (p+q)/2;

        mergesort(a,p,mid);
        mergesort(a,mid+1,q);

        merge(a,mid,p,q);
    }
}
int main(){
    int a[]={38,27,43,3,9,82,10};
    int n=7;
    int i;
    
    printf("sorted array:");

    for(i=0;i<n;i++)
       printf("%d",a[i]);

    return 0;
}