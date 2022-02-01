/*
	Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
*/

#include <iostream>
#include <vector>
using namespace std;

void c_p_c() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin); 
		freopen("output.txt","w",stdout);  
	#endif
}

// start your code and additional functions from here

void sort012(vector<int> &arr) {
	int count[3] = {0, 0, 0};
	for(int i = 0; i < arr.size(); i++) {
		count[arr[i]] += 1;
	}
	for(int i = 0; i < arr.size(); i++) {
		if(count[0] != 0) {
			arr[i] = 0;
			count[0] -= 1;
		}
		else if(count[1] != 0) {
			arr[i] = 1;
			count[1] -= 1;
		}
		else if(count[2] != 0) {
			arr[i] = 2;
			count[2] -= 1;
		}
	}

}

int main() {
	c_p_c();

	// write your main code here

	vector<int> arr{0, 2, 1, 1, 1, 2, 0, 0, 0, 2, 1, 1};
	sort012(arr);
	for(int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

}