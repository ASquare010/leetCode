#include "twoSum.h"
#include <unordered_map>



vector<int> twoSum(vector<int>& nums, int target) {


    unordered_map<int, int>map;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int diff = target - nums[i];
        if (map.count(diff)) {
            return { map[diff],i };
        }
        map[nums[i]] = i;
    }
    return {};



}


void twoSum() {


	print("\n");
	
	vector<int> arr = { 0,4,0,0,3,0 };
	arr = twoSum(arr,0);
	printVector(" \n TwoSum:", arr);

	print("\n");

}