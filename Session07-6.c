#include<stdio.h>
int main(){
	int array[]={1,2,3,4,5}, index;
	for(index=0; index<5; index++){
		if(array[index]%2!=0){
			array[index]+=2;
			printf("%d\n",array[index]);
		}
		else{
			array[index]+=3;
			printf("%d\n",array[index]);
		}
	}
	return 0;
}
