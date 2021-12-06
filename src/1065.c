#include <stdio.h>

#define SIZE 3

void divide(int *arr,int num){
	int i=SIZE-1;
	while(1){
		if(num == 0)
			break;
		arr[i] = num%10;
		num/=10;
		i--;
	}
}

int check(int *arr){
	int dif;
	dif=arr[1]-arr[0];
	if(dif == arr[2]-arr[1])
		return 1;
	else
		return 0;
}

int main(){
	int max;
	scanf("%d",&max);
	
	if(max >99 && max <1000){
		int count=99;
	
		for(int i=100;i<=max;i++){
			int arr[SIZE]={0};
			divide(arr,i);
			if(check(arr))
			count++;
		}
		printf("%d\n",count);
	}
	else if(max<100)
		printf("%d\n",max);
	
	else 
		printf("144");
}