#include <iostream>
#include <vector>
#include <map>

// Problem: Two Sum.
// Accepted. 
// Runtime = 8 ms (Beats 84.13% of users with C++).
// Memory = 11.11 MB (Beats 16.33% of users with C++).

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, int> mp;

        for (size_t i = 0; i < nums.size(); ++i) {
            int element = nums[i];

            auto it = mp.find(target - element);

            if (it == mp.end()) {
                // Not found.
                mp.insert(std::pair<int, int>(element, i));
            }
            else {
                // Found.
                return std::vector<int>{it->second, static_cast<int>(i)};
            }
        }

        // Realistically there's always an answer.
        std::vector<int> result;

        return result;
    }
};
