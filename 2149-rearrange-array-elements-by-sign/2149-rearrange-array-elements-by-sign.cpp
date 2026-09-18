class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
             vector<int> pos; // Vector to store positive numbers
             vector<int> neg; // Vector to store negative numbers

        // Step 1: Separate positives and negatives
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0)
                pos.push_back(nums[i]); // Add positive to pos[]
            else
                neg.push_back(nums[i]); // Add negative to neg[]
        }

        // Step 2: Place positives at even indices and negatives at odd indices
        for (int i = 0; i < n / 2; i++) {
            nums[2 * i] = pos[i];      // Even index → positive
            nums[2 * i + 1] = neg[i];  // Odd index → negative
        }

        return nums; // Return the rearranged array
    }
};