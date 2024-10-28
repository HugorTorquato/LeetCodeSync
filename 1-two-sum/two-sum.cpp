class Solution {
public:
    vector<int> twoSum(vector<int>& nums, const int target) {

        map<int, int> hashSearch;
        int index = 0;

        for(int num : nums){
            int valueToEvaluate = target - num;
            if(hashSearch.find(valueToEvaluate) != hashSearch.end()){
                return {hashSearch[valueToEvaluate], index};
            } else {
                hashSearch[num] = index;
            }
            index++;
        }
        return {0, 0};

        /*

        //O(N^2)
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] + nums[j] == target && i != j){
                    indexResults.push_back(i);
                    indexResults.push_back(j);
                    return indexResults;
                }
            }
        }

        return indexResults;
        
        */
    }
};