#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v{1,1,2,2,3,3};
	
// map�� Ȱ���� �ߺ����� 
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
	
	//  unique�� �տ������� �ߺ����� �� it�� ��ȯ, sort�� �ؼ� ���� �� ����ؼ� �ߺ������ؾ��� 
	for(int i : v) cout << i << " ";
	cout << "\n";
	sort(v.begin(), v.end()); 
	v.erase(unique(v.begin(), v.end()), v.end());
	for(int i : v) cout << i << " ";
	cout << "\n";
	
	return 0;
}
