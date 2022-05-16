// C++ program to find a pair with the given difference
#include <bits/stdc++.h>
using namespace std;

bool findPair(int arr[], int size, int n)
{
	unordered_map<int, int> mpp;
	for (int i = 0; i < size; i++) {
		mpp[arr[i]]++;
	}
	for (int i = 0; i < size; i++) {
		if (mpp.find(n + arr[i]) != mpp.end()) {
			cout << "Pair Found: (" << arr[i] << ", "
				<< n + arr[i] << ")";
			return true;
		}
	}
	cout << "No Pair found";
	return false;
}

// Driver program to test above function
int main()
{
	int arr[] = { 1, 8, 30, 40, 100 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = -60;
	findPair(arr, size, n);
	return 0;
}
