#include <iostream>
using namespace std;

int main(){
	int M;
	cin >> M;
	
	for(int i = 1; i<M; i++){
		int sum = i;
		int j=i;
		while(1){
			if(j == 0) break;
			sum+=j%10;
			j/=10;
		}
		if(sum == M){
			cout<<i<<endl;
			return 0;
		}
	}	
	cout<<"0"<<endl;
		return 0;
		
}