#include<stdio.h>
int main(){
	int a[5]={1,3,5,7,9};
	int check = 0;
	printf("cac phan tu chan trong mang la:");
	for(int i=0;i<5;i++){
		if(a[i] % 2 == 0){
			printf("%d, ",a[i]);
			check=1;
		}
	}	
	if(check!=1){
		printf("mang ko chua so chan");
	}
	
	return 0;
} 
