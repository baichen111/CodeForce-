#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> nums) ;
int main(){
	std::vector<int> nums = {1, 2, 3,-10,-21,-2, 4, 5};
	cout<<solve(nums)<<endl;
	return 0;
}

int solve(vector<int> nums) {
	sort(nums.begin(),nums.end());
    deque<int> dq;
	for(auto n:nums){
		dq.push_back(n);
	}
	int sum = 0;
	while(dq.size() != 1){
		int first = dq.front();
		dq.pop_front();
		int second = dq.front();
		dq.pop_front();
		sum += first + second;
		dq.push_back(first + second);
		sort(dq.begin(),dq.end());
	}
    return sum;
}