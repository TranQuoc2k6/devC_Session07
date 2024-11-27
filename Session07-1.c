#include<stdio.h>
int main(){
	int array[]={2,4,5,6,7}, index, number=0; 
	for(index=0; index<5; index++){
		number++;
		printf("phan tu %d trong mang la: %d\n",number ,array[index]);
	}
	int size=sizeof(array)/sizeof(int);
	printf("\ndo dai cua mang la: %d",size);
	return 0;
}

