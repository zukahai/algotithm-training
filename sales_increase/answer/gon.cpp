#include <bits/stdc++.h>

using namespace std;
	long long a[10000009] = {0};
int main(){
	int n ;
	cin>>n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	 }
	int tien[n];
	tien[0] = 1;

	for(int i = 1;i<n ;i++){
		if(a[i] > a[i-1]){
			tien[i] = tien[i-1]+1;
		}else 
			tien[i]=1;
	}
	
	int max =tien[0];
	
	
	for(int i = 1;i<n ;i++){
		//cout<<tien[i];
		if (max < tien[i]){
			max = tien[i];
		}
	}
	cout<<max;

	
	
	return 0;
	

	
}

