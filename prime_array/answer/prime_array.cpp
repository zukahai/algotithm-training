#include <iostream>
#include <cmath>
using namespace std;

/*
	y tuong:
	1.nho hon 1 khong phai la so nguyen to
	2.khong co uoc nao trong khoang 2 -> sqrt(n) la so nguyen to
*/

bool uoc(int num){
	int count = 0;
	for(int i = 2; i <= sqrt(num) ; i++){
		if(num % i == 0){
			count++;
		}	
	}
	if(count == 0){
		return true;
	}else{
		return false;
	}
}

int* checkNguyento(int arr[] , int length){
	int* ans = new int[length];
	int count = 0;
	
	for(int i = 0 ; i < length ; i++){
		if(arr[i] > 1 && uoc(arr[i])){
			ans[count] = arr[i];
			count++;
		}
	}
	ans[count] = 0; 
	return ans;
}

int main(){
	int n ;
	cin>>n;
	int arr[n];
	
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	
	int* primes = checkNguyento(arr, n);
    int count = 0;
    while (primes[count] != 0) {
        cout << primes[count] << " ";
        count++;
    }
    delete[] primes;
    return 0;
}


