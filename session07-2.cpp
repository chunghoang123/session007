#include<stdio.h>
int main(){
	int n, a[5];
	printf(" moi nhap phan tu\n");
	for(int i =0;i<5;i++){
		printf("phan tu thu %d ",i+1);
		scanf("%d",&a[i]);
	}
	printf("mang vua nhap: ");
	for(int i=0;i<5;i++){
		printf("%d,",a[i]);
	}
	
	return 0;
}
