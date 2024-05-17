//         return ans;

//     }
// };

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> mp;
        for(int val : nums){
            mp[val]++;
        }
        auto iter = mp.begin();
        while(iter != mp.end()){
            if(iter->second >= k) // Compare with k for top K frequent elements
[
