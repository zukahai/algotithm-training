#include <iostream>

using namespace std;
	long long b[10000009] = {0};
    long long d[10000009] = {0};
    long long c[10000009] = {0};
int main() {

    int n ;
    //cout<<"nhap n"; 
	cin>>n;
    
    
    // nhap mang c
    for (int i = 0; i < n; i++) {
 		//cout << "Nhap vao phan tu a[" << i << "] : ";
		cin >> c[i];
	 }
	for (int i = 0; i < n; i++){

		if(c[i]>0){
			b[c[i]] += 1;
	    
		}
		else {
			d[c[i]*(-1)] = d[c[i]*(-1)] + 1;
		}
      
	}
	
	
	for(int i =0 ;i<= n;i++){
		//cout<<b[i]<<" ";

	}

	
	for(int i =0;i<= n;i++){
		//cout<<d[i]<<" ";

	}
	
	int max =0;
    for (int i = 0; i < n; i++)
		if (c[i] > 0) {
	        if (b[max] < b[c[i]]) {
	            max = c[i];
	        }
	        else if (b[max] == b[c[i]] && max < c[i]){
	        	max = c[i];
			}
    	}
//		cout<<"so lan xuat hien "<<b[max] <<endl ;
//    cout<<""<<max<<endl;
    
    int max_2 =0;
    for (int i = 0; i < n; i++)
		if (c[i] < 0) {
	        if (d[max_2] < d[c[i]*(-1)]) {
	            max_2 = c[i]*(-1);
	        }else if (b[max] == b[c[i]*(-1)] && max < c[i]*(-1)){
	        	max_2 = c[i]*(-1);
			}
    	}

    int ss =max_2*(-1);

	if (b[max] < d[max_2] ){
		cout<<ss;
	}
	else  {
		cout<<max;
	}

    return 0;
}

