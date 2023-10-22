#include<bits/stdc++.h>
using namespace std;
vector<int> findClosestElements(vector<int> arr, int k, int x);

int main(){
	// vector<int> arr = {-972,-971,-874,-843,-801,-740,-702,-627,-625,-595,-567,-551,-535,-431,-405,-389,-318,-290,-174,-133,-97,-88};
	// int k = 12,x = -125;
	// vector<int> arr = {-961, -715, -679, -667, -663, -580, -547, -497, -495, -373, -292, -276}; 
	// int k = 5,x = -551;
	vector<int> arr = {-975,-975,-965,-955,-937,-907,-855,-827,-822,-811,-788,-777,-753,-750,-743,-681,-617,-549,-541,-529,-453,-420,-420,-412,-375,-339,-323,-301,-189,-151,-140,-80,-74,-68,-66,-47 }; 
	int k = 16,x = -567;
	// std::vector<int> arr = { -914, -851, -821, -732, -673, -573, -529, -413, -326, -307, -249, -131, -60 };
	// int k = 12,x = -60;
	for(auto n:findClosestElements(arr,k,x)){
		cout<<n<<" ";
	}
	return 0;
}

vector<int> findClosestElements(vector<int> arr,int k,int x){
	// split vector into 2 parts and store them in 2 stacks respectively
	int left = 0, right = 0;
	for (int i = 0; i < arr.size() - 1; ++i)
	{
		 if(x >= arr[i] && x <= arr[i+1]){
		 	cout<<arr[i]<<" "<<arr[i+1]<<endl;
		 	left = i;
		 	right = i + 1;
		 }
	}
	stack<int> s1,s2;
	for (int i = 0; i <= left; ++i)
	{
		s1.push(arr[i]);
	}
	for (int i = arr.size() - 1; i >= right; --i)
	{
		s2.push(arr[i]);
	}
	std::vector<int> v;
	while(k > 0){
		if(s1.empty()){
			v.push_back(s2.top());
			s2.pop();
		}else if(s2.empty()){
			v.push_back(s1.top());
			s1.pop();
		}else{
			int d1 = abs(x - s1.top()), d2 = abs(x - s2.top());
			if(d1 < d2){
				v.push_back(s1.top());
				s1.pop();
			}else {
				v.push_back(s2.top());
				s2.pop();
			}
		}

		k--;
	}
	sort(v.begin(),v.end());
	return v;

}
