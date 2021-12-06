#include <stdio.h>
#define SIZE 10

int main(){
	int n,d;
	scanf("%d %d", &n, &d);
	
	int arr[SIZE]={0};
	
	for(;n>0;n--){
		int num=n;
		while(1){
			if(num==0)
				break;
			arr[num % 10]++;
			num/=10;
		}
	}
	printf("%d\n", arr[d]);
	
}