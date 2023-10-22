#include <bits/stdc++.h>

using namespace std;

bool solve(){
	int x,y,z;
	cin>>x>>y>>z;
	//cout<<"x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
	
	if((x == 1 && y == 1) || (x== 1 && z == 1) || (y == 1 && z == 1)) return true;
	return false;
}
int main(){
	
	int t;

	cin >>t;
	//t = 1;
	int cnt = 0;
	while(t--){
		if(solve()) cnt++;
	}
	cout<<cnt;
	return 0;
}