#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	long long count=1;
	long long maxi=INT_MIN;
	for(int i=0; i<s.length(); i++){
		//for(int j=i+1; j<s.length(); j++){
			if(s[i]==s[i+1]){
				count++;
			}
			else{
				count=1;
			}
		maxi=max(maxi,count);
		}
	
	cout<<maxi;	
}
