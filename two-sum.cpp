#include <vector>
#include <unordered_map>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end())
            {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};

{ /*

 ✅ Explanation of the Code:
 The given C++ code solves the Two Sum problem efficiently using unordered_map (hash map). Let's break it down step by step.

 🔹 Problem Statement Recap
 Given an array of integers (nums) and a target integer (target).
 Find two numbers in the array that add up to target.
 Return the indices of these two numbers.
 Assumption: There is exactly one solution, and you may not use the same element twice.
 🔹 Code Breakdown
 1️⃣ Include Necessary Headers
 cpp
 Copy
 Edit

 #include <vector> → Used for the std::vector<int> return type.
#include <unordered_map> → Used for the hash map (std::unordered_map<int, int>) to store numbers and their indices.

class Solution → Defines a class named Solution.
std::vector<int> twoSum(std::vector<int>& nums, int target) → Function inside the class:
Takes a vector of integers (nums).
Takes an integer target.
Returns a vector of two indices.

This hash map stores:
Key → The number (nums[i]).
Value → The index (i).
Why use unordered_map?

It allows fast lookups (O(1) average time complexity).

 */
}