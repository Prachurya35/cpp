#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
map<int,int> m;

	int v[]={4,7,8,2,45};
	for(auto x:v){
		m[x]++;
	}
	for(auto x:m){
		cout << x.first<< endl;
	}
	
		

}