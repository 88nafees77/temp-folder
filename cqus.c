#include<stdio.h>
#include<string.h>
char m[20];
int ispalindrom(char* str){
	int i=0,j=strlen(str)-1;
	while(i<j){
		if(str[i++]!=str[j--])return 0;
	}
	return 1;
}
void mirror(char *str,char* ch,char* rev){
	int flag=0;
	int l=0;
	for(int i=0;i<strlen(str);i++){
		char c=str[i];
		for(int j=0;j<strlen(ch);j++){
			if(c==ch[j]){
				flag=1;
				m[l++]=rev[j];
				break;
			}

		}
		
	}

}
int checkMirror(char* str){
	int i=0,j=strlen(m)-1;
	while(i<j){
		if(str[i++]!=m[j--])return 0;
	}
	return 1;
}
int main(){
	int len;
	scanf("%d",&len);
	char str[len];
	scanf("%s",str);
	char ch[]={'A','E','H','I','J','L','M','O','S','T','U','V','W','X','Y','Z','1','2','3','5','8'};
	char rev[]={'A','3','H','I','L','J','M','O','2','T','U','V','W','X','Y','5','1','S','E','Z','8'};
	if(ispalindrom(str))printf("is a regular palindrome.\n");
	else printf("is not a regular palindrome.\n");
	mirror(str,ch,rev);
	printf("%s ",m);
	if(checkMirror(str))printf(" is a mirrored string.\n");
	else printf(" is not a mirrored string.");
	if(ispalindrom(m))printf(" is a mirror palindrome\n");
	else printf("is not mirror palindrome\n");

	return 0;
}
