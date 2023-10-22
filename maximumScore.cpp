#include<bits/stdc++.h>
using namespace std;
int maximumScore(int a, int b, int c);
int main(){
	//int a = 344,b = 537,c = 670; //expected 775
	int a = 518,b = 791,c = 911;  //expected 1110
	cout<<maximumScore(a,b,c)<<endl;
	
	return 0;
}

int maximumScore(int a, int b, int c) {
    int score = 0;
    stack<int> s1,s2,s3;
    for (int i = 0; i <= a; ++i)
    {
    	s1.push(i);
    }
    for (int i = 0; i <= b; ++i)
    {
    	s2.push(i);
    }
    for (int i = 0; i <= c; ++i)
    {
    	s3.push(i);
    }
    while((s1.top() != 0 && s2.top() !=0) || (s1.top() != 0 && s3.top() !=0) || (s3.top() != 0 && s2.top() !=0)){
    	int st1 = s1.top(),st2 = s2.top(),st3 = s3.top();
    	//cout<<st1<<" "<<st2<<" "<<st3<<endl;
    	if(st1 > st2){
    		if(st1 > st3){
    			//st1 largest
    			s1.pop();
    			if(st2>st3){
    				//st2 second largest ; st3 smallest
    				s2.pop();
    			}else{
    				//st3 second largest ; st2 smallest
    				s3.pop();
    			}

    		}else{
    			//st3 is largest ; st1 second largest
    			s3.pop();
    			s1.pop();

    		}
    	}else if(st1 <= st2){
    		if(st2 > st3){
    			//st2 largest
    			s2.pop();
    			if(st1 > st3){
    				//st1 second largest ; st3 smallest
    				s1.pop();
    			}else{
    				//st3 second largest; st1 smallest
    				s3.pop();
    			}
    		}else{
    			//st3 is largest ,st2 is second largest
    			s3.pop();
    			s2.pop();
    		}	
    	}
    	score++;
    }
    return score;
}