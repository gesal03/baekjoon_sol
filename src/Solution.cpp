#include <iostream>
using namespace std;

void sort(int *a, int *b, int *c){
	int tmp;
	if( *a > *b ){
		tmp=*a;
		*a=*b;
		*b=tmp;
	}
	if(*b>*c){
		tmp=*b;
		*b=*c;
		*c=tmp;
	}
	if( *a > *b ){
		tmp=*a;
		*a=*b;
		*b=tmp;
	}
}

int main() {
	while(1){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==0 &&b==0&&c==0)
			break;
		
		sort(&a,&b,&c);
	
		if(c*c == a*a + b*b)
			cout<<"right"<<endl;	
		else
			cout<<"wrong"<<endl;
	}
}