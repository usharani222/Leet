class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num=nums[0],count=0;
        for(int i:nums)
        {
            if(num==i)  count++;
            else if(count==0)   num=i;
            else count--;
        }
        return num;
    }
};

//Boyer-Moore Majority Voting Algorithm
// Initialization:

// The element variable is initialized to the first element of the array (nums[0]).
// The count is initialized to 0, which will keep track of how many times the current element appears as we iterate through the array.
// Iteration through the array:
// The loop iterates over the entire array nums[], and for each number:

// If the current number (nums[i]) matches the element, the count is incremented.
// If the current number doesn't match element, and count is 0, we set the element to nums[i] (switch to a new candidate) and reset count to 1.
// If the current number doesn't match element and count is not 0, we decrement the count.
// Return the majority element:
// After iterating through the entire array, the element variable will hold the candidate for the majority element, and that is returned.