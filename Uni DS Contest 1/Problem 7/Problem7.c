#include<stdio.h>
int main(){
	unsigned long long DP[51];
	DP[1]=1;
	DP[2]=2;
	int i;
	for(i=3;i<=50;i++)
		DP[i]=DP[i-1]+DP[i-2];
	int n;
	while(scanf("%d",&n)==1&&n!=0){
		printf("%llu\n",DP[n]);
	}
	return 0;
}
