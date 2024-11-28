#include<stdio.h>

int main(){
	int mang[] ={1,2,3,4,7,8,9};
	int doDai = sizeof(mang)/sizeof(mang[0]);
	printf(" phan tu trong mang la:\n");
	for(int i=0;i<doDai;i++){
		printf("phan tu i %d: %d\n",i,mang[0]);		
	}
	printf("do dai cua mang la: %d", doDai);
    return 0;
}
