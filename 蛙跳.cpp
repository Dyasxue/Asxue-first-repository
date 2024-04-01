#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n=0,b=0,a=0;
	bool t=true;
	cin>>n>>a;
	for(int i=0;i<n-1;i++){
		cin>>b;
		if(a-b>n-1||a-b<1-n){
			t =false;
		}
		a=b;
	}
	if(t==1){
		cout<<"Jolly"<<endl;
	}
	else{
		cout<<"Not jolly"<<endl;
	}
	return 0;
} 
