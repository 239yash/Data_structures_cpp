class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        if(nums.size() == 0)
            return NULL;
        
        return func(nums, 0, nums.size() - 1);
    }
    
    TreeNode* func(std::vector<int> &nums, int left, int right)
    {
        if(left > right) 
            return NULL;
        
        int mid = left + (right - left) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node -> left = func(nums, left, mid - 1);
        node -> right = func(nums, mid + 1, right);
        
        return node;
    }
};
