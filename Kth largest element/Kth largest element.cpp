#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int kthLargestElement(vector<int>& nums, int k) {
	priority_queue<int> pq;
	for (auto i : nums) {
		pq.push(i);
	}
	k = k - 1;
	while (k != 0) {
		k--;
		pq.pop();

	}
	return pq.top();
}

int main() {
	vector<int> nums;
	cout << "Enter the size of the list: ";
	int size;
	cin >> size;
	for (int i = 0; i < size; i++) {
		cout << "Enter your element: ";
		int element;
		cin >> element;
		nums.push_back(element);
	}
	cout << "Enter the value of K: ";
	int k;
	cin >> k;
	cout << kthLargestElement(nums, k);
		
	
	return 0;
}