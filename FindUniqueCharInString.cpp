#include<bits/stdc++.h>
using namespace std;
int firstUniqChar(string s);
int main(){
	string s = "aabb";
	cout<<firstUniqChar(s)<<endl;
}

int firstUniqChar(string s) {
	set<char> myset;  // store dupicates
	for (int i = 0; i < s.size()-1; ++i)
	{
		if(s.substr(i+1).find(s[i]) == string::npos && myset.find(s[i]) == myset.end() ){ 
			return i;
		}
		myset.insert(s[i]);
	}
	return -1;
}