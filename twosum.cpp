#include <iostream>
#include <vector>
#include <unordered_map>

// Problem: Two Sum.
// Accepted. 
// Runtime = 3 ms (Beats 99.43% of users with C++).
// Memory = 10.81 MB (Beats 33.67% of users with C++).

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> mp;

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
