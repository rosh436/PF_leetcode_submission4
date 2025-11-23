#include<stdio.h>
int memo[38];
int tribonnaci(int n){
	if(n == 0)
	return 0;
	if(n == 1 || n == 2)
	return 1;
    if(memo[n] != -1)     //-1 means that there are no calculated value     
    return memo[n];
    
    memo[n]=tribonnaci(n-1)+tribonnaci(n-2)+tribonnaci(n-3);
    return memo[n];
}
int main(){
	int n, i;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(i=0;i<=37;i++){
		memo[i]=-1;
	}
	int result = tribonnaci(n);
	printf("%d", result);
}
