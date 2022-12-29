#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
	long long n;
	cin >> n;
	cout << n << " ";
	while(n!=1){
 
		// checking the num is even
		if(n%2==0){
			n = n/2;
		}
		else{
 
			// checking the number is odd
			n = (n*3) + 1;
		}
		cout << n << " ";
	}
	return 0;
 
}
 