#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v{1,1,2,2,3,3};
	
// map을 활용한 중복제거 
/*
map<int, int> mp;
for(int i : v){
	if(mp[i]){
		continue;
	}else{
		mp[i] = 1;
	}
	
}
vector<int> ret;
for(auto it : mp){
	ret.push_back(it.first);
}
for(int i : ret)cout << i << " ";
*/
	
	//  unique는 앞에서부터 중복제거 후 it를 반환, sort를 해서 정렬 후 사용해서 중복제거해야함 
	for(int i : v) cout << i << " ";
	cout << "\n";
	sort(v.begin(), v.end()); 
	v.erase(unique(v.begin(), v.end()), v.end());
	for(int i : v) cout << i << " ";
	cout << "\n";
	
	return 0;
}
