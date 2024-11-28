#include<stdio.h>
int main(){
	int n;
	printf(" moi nhap kich thuoc mang");
	scanf("%d",&n);
	int a[n];
	printf("moi nhap cac gia tri cau mang");
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
		a[i]==a[n];
	}
	printf("kich thuoc mang: %d\n",n);
	for(int i=0;i<n;i++){
			printf(" cac gia tri trong mang %d\n,",a[i]);

	}
	

	
	
	return 0;
}
