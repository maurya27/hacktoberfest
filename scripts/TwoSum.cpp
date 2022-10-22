vector<int> twoSum(vector<int> &nums, int target) {
    map<int, int> hash;
    
    for(int i = 0; i < nums.size(); i++) {
        int difference = target - nums[i];
        if (hash.count(difference)) {
            return { hash[difference], i };
        }
        hash[nums[i]] = i;
    }
    
    return vector<int>{};
}
