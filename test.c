//Nafees Ahmad Ansari
#include<stdio.h>
void array(int *arr,int n){
	int j=0,k=0;
	int temp[50];
	int temp1[50];
	int max=0,min=10000;
	for(int i=0;i<n;i++){
		int val=arr[i];
		j=0;
		while(val!=0){
			temp[j++]=val%10;
			val=val/10;	
		}
		max=0;
		min=10000;
		for(int l=0;l<j;l++){
			if(temp[l]>max){
				max=temp[l];
			}
		}
		for(int l=0;l<j;l++){
			if(min>temp[l]){
				min=temp[l];
			}
		}
		int x=(max*11)+(min*7);
		temp1[k++]=x;
	}
	countbit(temp1,k);

}
void countbit(int *arr,int len){
	int i=0;
	while(i<len){
		arr[i]=arr[i]%100;
		i++;
	}
//	for(int i=0;i<len;i++)printf("%d\t",arr[i]);
	int temp[50],j=0;
	int odd=0,even=0;
	for(j=0;j<len;j++){
		temp[j]=arr[j]/10;
	}
/*	for(int j=1;j<=len;j+2){
		for(int k=j+2;j<=len;j+2){
			if(temp[j]==temp[k])odd++;
		}
	}*/
	for(int j=0;j<len;j+2){
                for(int k=j+2;j<len;j+2){ 
                        if(temp[j]==temp[j+1])even++;
                }
        }
//	for(j=0;j<len;j++)
	printf("%d\t",even);


}
int main(){
	int arr[]={8, 234, 567, 321, 345 ,123, 110 ,767, 111};
	int n=sizeof(arr)/sizeof(int);
	array(arr,n);
}
