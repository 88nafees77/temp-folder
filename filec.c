#include<stdio.h>
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a[4];
	for(int i=0;i<4;i++)scanf("%d",&a[i]);
	for(int i=0;i<4;i++){
		a[i]++;
		printf("%d\t",a[i]);
	}
}
