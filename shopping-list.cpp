#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
#include <stdlib.h>
#include <algorithm>
using namespace std;
/*
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each item.
For example,
input:
1
50.0
1
100.0
output:
0.0
input:
1
50.0
1
10.0
output:
45.0
input:
2
20.0 20.0
2
100.0 50.0
output:
10.0
input:
2
20.0 20.0
2
20.0 0.0
output:
36.0
input:
3
10.0 20.0 30.0
3
5.0 10.0 95.0
output:
29.0
*/
void split(vector<float>& res, vector<float>&list,int& size){
	int i;
	if(size%2==0){
		for( i=0;i<size/2;i++) res.push_back(list[i]);
		for( i=size/2;i<size;i++) list[i-size/2]=list[i];
		size=size/2;
	}else{
		for( i=0;i<size/2;i++) res.push_back(list[i]);
		for( i=size/2;i<size;i++) list[i-size/2]=list[i];
		size=size/2+1;
	}
}



float merge(vector<float>& left,vector<float>& right,int size){
	if(size==1){
		if(left.empty()){
			left.push_back(right[0]);
			right.erase(right.begin());
		}else if(right.empty()){
			left.push_back(left[0]);
			left.erase(left.begin());
		}
		return left[0]*0.01*right[0];
	}
	vector<float> res;
	float lr;
	float rl;
	if(left.size()>right.size()){
		res.push_back(left[0]);
		lr=left[0]*0.01*right[0];
		left.erase(left.begin());
		rl=right[0]*0.01*left[0];
		right.erase(right.begin());
	}else if(left.size()<right.size()){
		res.push_back(right[0]);
		rl=right[0]*0.01*left[0];
		right.erase(right.begin());
		lr=left[0]*0.01*right[0];
		left.erase(left.begin());
	}else{
		if(left[0]<right[0]){
			res.push_back(left[0]);
			lr=left[0]*0.01*right[0];
			left.erase(left.begin());
			rl=right[0]*0.01*left[0];
			right.erase(right.begin());
		}else{
			res.push_back(right[0]);
			rl=right[0]*0.01*left[0];
			right.erase(right.begin());
			lr=left[0]*0.01*right[0];
			left.erase(left.begin());
		}
	}
	float resv=0;
	if(lr<rl){
		resv+=lr;
		res.push_back(right[0]);
		right.erase(right.begin());
	}else{
		resv+=rl;
		res.push_back(left[0]);
		left.erase(left.begin());
	}
	while(!left.empty()&&!right.empty()){
		if(left[0]<right[0]){
			resv+=left[0]*0.01*right[0];
			res.push_back(left[0]);
			left.erase(left.begin());
		}else{
			resv+=right[0]*0.01*left[0];
			res.push_back(right[0]);
			right.erase(right.begin());
		}
	}
	if(left.empty()){
		if(res.size()==size){
			res.push_back(right[0]);
			right.erase(right.begin());
			resv+=res[size-1]*0.01*right[0];
		}else{
			resv+=res[res.size()-1]*0.01*right[0];
		}
		for(int i=0;i<right.size();i++) res.push_back(right[i]);
	}else if(right.empty()){
		if(res.size()==size){
			res.push_back(left[0]);
			left.erase(left.begin());
			resv+=res[size-1]*0.01*left[0];
		}else{
			resv+=res[res.size()-1]*0.01*left[0];
		}
		for(int i=0;i<left.size();i++) res.push_back(left[i]);
	}
	for(int i=0;i<res.size();i++) left.push_back(res[i]);
	return resv;
}
float totalPriceCalculation(vector<float> prices, vector<float> discount){
	int size=discount.size();
	vector<float> left;
	vector<float> right;
	split(left,discount,size);
	split(right,discount,size);
	return merge(left,right,size);
}

int main(){
	vector<float> price={50,100,20,20,10,20,30};
	vector<float> discount={100,50,100,50,5,10,95};
	cout<<totalPriceCalculation(price,discount)<<endl;
	return 0;
}
