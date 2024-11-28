#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int ln=a[0];
	for(int i=0;i<5;i++){
		if(a[i]>ln){
			ln=a[i];
		}
		
	}
	printf("gia tri lon nhat trong mang la: %d",ln);
	
	
	
			return 0;
	}

