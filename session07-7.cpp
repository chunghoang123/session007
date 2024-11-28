#include<stdio.h>
int main(){
	int n;
	printf("moi nhap so cau mang");
	scanf("%d", &n);
	int a[n];
	printf("moi nhap cac gia tri trong mang\n,");
	for(int i=0;i<n;i++){
		while(1){
			printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &a[i]);
            if(a[i] %2 !=0){
            	break;
			}else{
				printf(" nhap lai gia tri le ");
			}
			
		}
	}
	
	printf("cac phan tu le trong mang la");
	for(int i = 0;i<n;i++){
		printf("%d",a[i]);
		
	}
	
	
			return 0;
	}

