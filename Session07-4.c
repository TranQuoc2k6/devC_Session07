#include<stdio.h>
int main(){
	int array, number, index, stt=0;
	printf("so phan tu cua mang ma ban muon nhap: ");
	scanf("%d", &array);
	for(index=0; index<array;index++){
		stt++;
		printf("phan tu thu %d=  ", stt);
		scanf("%d",&number);
	}
	return 0;
}
