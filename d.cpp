#include<bits/stdc++.h>
using namespace std;
int mx = 26*26*26*26 + 4;
int d[26][26][26][26]={0};
int a[500005]={0};


void func()
{
	for(int i=4; i<mx ; i++){
		for(int j=25; j>0 ; j--)
		if(d[a[i-3]][a[i-2]][a[i-1]][j]==0)	
		{
			a[i]=j;
			d[a[i-3]][a[i-2]][a[i-1]][j]=1;
			break;
		}	
	}	
}

int main()
{
 	func();
	int n;
	while(scanf("%d", &n)!=EOF){
		int flag=0;
		if(n>(mx)){
			printf("Impossible\n");
			continue;
		}

		for(int i=0 ; i<n ;i++){
			printf("%c", a[i]+'a');
		}
		printf("\n");
	}
	return 0;
}
