#include<stdio.h>
void rot(int *arr,int n){
    int temp=arr[0];
    int i=0;
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
    
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	    int d;
	    scanf("%d",&d);
//	    while(d--){
	        rot(arr,n);
//	    }
	    for(int i=0;i<n;i++)printf("%d ",arr[i]);
	    printf("\n");
	}
	return 0;
}
