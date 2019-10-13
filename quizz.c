#include<stdio.h>
#include<string.h>
//using namespace std;
int main(){
    int len;
    scanf("%d",&len);
    char str[len];
    scanf("%s",str);
    int k;
    scanf("%d",&k);
    int i=0;

    while(i<len-1){
        int ch=str[i];
        if(ch>=65 && ch<=91){
            if((ch+k)<91){
                printf("%c",str[i]);
            }else{
                int diff=(ch+k)-91;
                printf("%c",65+diff);
            }
            if(ch>=97 && ch<=122){
                if((ch+k)<122){
                    printf("%c",str[i]);
                }else{
                    int diff=(ch+k)-122;
                    printf("%c",97+diff);
                }
            }
            if(ch>40 && ch<50){
                printf("%c",str[i]);
            }
        }
        i++;
        
    }
   
}
