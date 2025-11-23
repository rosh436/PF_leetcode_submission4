#include<stdio.h>
int main(){
	struct Boxs {
		int length;
		int width;
		int height;
	};
	int n,i;
	scanf("%d", &n);
	struct Boxs box[n];
	for(i=0;i<n;i++){ 

		scanf("%d %d %d", &box[i].length, &box[i].width, &box[i].height);      
	    printf("\n");
	}
    for(i=0;i<n;i++){
    	if(box[i].height<41)
		printf("%d\n", box[i].height*box[i].width*box[i].length);
		
	}
}
