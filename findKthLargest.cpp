#include<bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int> nums, int k);
int main(){
	std::vector<int> nums = {3,2,3,1,2,4,5,5,6};
	cout<<findKthLargest(nums,4)<<endl;

	return 0;
}

int findKthLargest(vector<int> nums, int k){
	sort(nums.begin(),nums.end(),greater<int>());
	for (int i = 0; i < nums.size(); ++i)
	{
		if(i+1 == k) return nums.at(i);
	}
	return -1;
}
