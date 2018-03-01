
#include <stdio.h>


void heapify(int a[8],int i,int n){
    int l=2*i+1;
    int r=2*i+2;
    int b=i;
   
    if(a[l]>a[b]&&l<n)
        b=l;
    if(a[r]>a[b]&&r<n)
        b=r;
        
    if(b!=i){
            int t=a[b];
            a[b]=a[i];
            a[i]=t;
           // printf("\n for i=%d,low-%d,left-%d,right-%d ",a[i],a[low],a[l],a[r]);
           
            heapify(a,b,n);
    }
    
}
void heapsort(int a[8],int n){
    int i;
    
    for(i=(n/2-1);i>=0;i--){
       // printf(" %d ",i);
        heapify(a,i,n);
       // printf("\n %d ",a[i]);
    }
    int t;
    for(i=n-1;i>=0;i--){
            t=a[0];
            a[0]=a[i];
            a[i]=t;
            
            heapify(a,0,i);
    }
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
   
}


int main()
{   int a[8]={3,6,4,9,1,19,30,20};
    
    heapsort(a,8);
    
    return 0;
}



