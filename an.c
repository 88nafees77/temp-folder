#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n1,n2;
        scanf("%d%d",&n1,&n2);
        char str1[n1];
        scanf("%s",str1);
        char str2[n2];
        scanf("%s",str2);
        int a1[26]={0};
        for(int i=0;i<strlen(str1);i++){
            a1[str1[i]-'a']++;
        }
          int a2[26]={0};
        for(int i=0;i<strlen(str2);i++){
            a2[str2[i]-'a']++;
        }
       int flag=0;
       for(int i=0;i<26;i++){
           if(a1[i]!=a2[i])
                flag=1;
                break;
       }
       if(flag==1){
           printf("NO");
       }else{
           printf("YES");

       }
       printf("\n");
        
    }
}
