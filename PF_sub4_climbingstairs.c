#include<stdio.h>
//its the same as fibonnaci, we can say. But its shifted by one as in the fibonnaci the fiorst term is 0 but in here to climb the stairs their are two ways 1 step or 2 step sdo there is no 0 step or 0 way
//acc to my understanding
int memo[46];   // because n can be 1 to 45
int main(){
	int n, i;
	printf("Enter the value for n: ");
	scanf(" %d", &n);
	for(i=0;i<46;i++){
		memo[i]= -1;
	}
	int result = climbingStairs(n);    //fibonnaciSeries
	 printf("%d", result); 
}
int climbingStairs(int n){
    if(n == 1){
    	return 1;
	}
	if(n == 2){
		return 2;
	}
	if(memo[n] != -1){
		return memo[n];
	}
	memo[n] = climbingStairs(n-1)+climbingStairs(n-2);
	return memo[n];
	
}
