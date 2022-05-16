#include <bits/stdc++.h>
using namespace std;
void productArray(int arr[], int n)
{

	// Base case
	if (n == 1) {
		cout << 0;
		return;
	}

	int i, temp = 1;

	/* Allocate memory for the product array */
	int* prod = new int[(sizeof(int) * n)];

	/* Initialize the product array as 1 */
	memset(prod, 1, n);

	for (i = 0; i < n; i++) {
		prod[i] = temp;
		temp *= arr[i];
	}

	/* Initialize temp to 1
	for product on right side */
	temp = 1;

	for (i = n - 1; i >= 0; i--) {
		prod[i] *= temp;
		temp *= arr[i];
	}

	/* print the constructed prod array */
	for (i = 0; i < n; i++)
		cout << prod[i] << " ";

	return;
}

// Driver Code
int main()
{
	int arr[] = { 10, 3, 5, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The product array is: \n";
	productArray(arr, n);
}
