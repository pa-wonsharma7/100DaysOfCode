/*
	Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. 
	Find the missing element.
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

// Write your code and additional functions here

int findMissingElement(vector<int> arr) {

	// sum of all numbers - sum of numbers present in array will give the 
	// missing number.

	int n = arr.size();
	int sum = ((n + 1) * (n + 2)) / 2;
	int elementSum = 0;
	for(int i = 0; i < n; i++) {
		elementSum += arr[i];
	}
	return sum - elementSum;

}


int main() {
	c_p_c();

	// Start writing code from here
	
	vector<int> arr{1, 2, 3, 5};
	cout << "Missing number is " << findMissingElement(arr) << endl;

	return 0;
}