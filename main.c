#include <stdio.h>

int linear(int[],int,int);
int binary(int[],int,int);


int main() {
   
    int N;
    printf("Enter the number of array:");
    scanf("%d",&N);
    int D[N];
    int i;
    for (i=0; i<N; i++) {
        printf("A[%d]:",i);
        scanf("%d",&D[i]);
    }
    
    int search;
    printf("Enter a number for search:");
    scanf("%d",&search);
    
    int indis;
    indis=linear(D, N, search);
   
    if (indis==-1) {
        printf("Not found.");
    }
    else
        printf("Found:%d \n",indis);
    
    
    return 0;
}




int linear(int D[],int N,int search)
{
    int i;
    for (i=0; i<N; i++) {
        if (D[i]==search) {
            return i;
        }
    }
    
    return -1;
}


int binary(int D[],int N,int search) //for sorted arrays
{
    int mid,left=0,right=N-1;
    while (left<=right) {
        mid=(left+right)/2;
        if (search==D[mid]) {
            return mid;
        }
        else if (search>D[mid])
            left=mid+1;
        else
            right=mid-1;
    }
    return -1;
}
