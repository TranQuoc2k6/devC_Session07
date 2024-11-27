#include<stdio.h>
int main(){
	int array[5], index, number=0; 
	for(index=0; index < 5; index++){
		number++;
		printf("nhap phan tu thu %d: ",number);
		scanf("%d", &array[index]);
	}
	int stt=0;
	for(index=0; index < 5; index++){
		stt++;
		printf("array[%d] = %d\n",stt, array[index]);
	}
	return 0;
}
