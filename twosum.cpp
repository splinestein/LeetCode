#include <iostream>
#include <vector>
#include <map>

// Problem: Two Sum.
// Accepted.
// Runtime = 13 ms (Beats 63.76% of users with C++).
// Memory = 11.23 MB (Beats 13.71% of users with C++).

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, int> mp;

        for (size_t i = 0; i < nums.size(); ++i) {
            int element = nums[i];
            int calc = target - element;

            auto it = mp.find(calc);

            if (it == mp.end()) {
                // Not found.
                std::pair<int, int> p1(element, i);
                mp.insert(p1);
            }
            else {
                // Found.
                std::vector<int> answer = {static_cast<int>(it->second), static_cast<int>(i)};
                return answer;
            }
        }

        // Placedholder. Realistically there's always an answer.
        std::vector<int> result;

        return result;
    }
};
