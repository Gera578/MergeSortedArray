/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, 
and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function,
but instead be stored inside the array nums1.
To accommodate this, nums1 has a length of m + n, 
where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. 
nums2 has a length of n.
*/

/*EXAMPLE
Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
*/

#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

	vector <int> combined; //both sizes added
	combined.reserve(m + n);// Reserve space for m + n elements

	for (int i = 0; i < nums1.size(); i++) { 
		if(nums1[i] != 0) //ignore the 0s
			combined.push_back(nums1[i]);//with push back we add the elements of array nums1 into the vector "combined"
	}
	for (int j = 0; j < nums2.size(); j++) {
		if (nums2[j] != 0) { //ignore the 0s
			combined.push_back(nums2[j]); //we add the elements of nums2 into combined

		}
	}

	sort(combined.begin(), combined.end()); //sorting the array
	for (int j = 0; j < combined.size(); j++) { //displaying the array
		cout << combined[j] << " ";
	}
}

int main() {
	
	vector<int> num1{1,2,3,0,0,0};
	vector<int> num2{2,5,6};


	merge(num1, num1.size(), num2, num2.size());

}