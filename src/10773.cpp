#include <iostream>

using namespace std;


int main(){
	int n;
	cin>> n;
	
	int arr[n]={0};
	
	int index=0;
	int sum=0;
	for(int i=0; i<n;i++){
		int num;
		cin>>num;
		sum+=num;
		if(num != 0)
			arr[index++] = num;
		if(num == 0)
			sum-=arr[--index];
	}
	cout<<sum<<endl;

}