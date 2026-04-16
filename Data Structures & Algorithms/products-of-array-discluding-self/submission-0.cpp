class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> left, right(nums.size()), products;
    right.reserve(nums.size());
    int product = 1;
    for (int num : nums) {
        left.push_back(product);
        product *= num;
    }

    product = 1;
    for (int i=nums.size()-1; i>=0; i--) {
        right[i] = product;
        product *= nums[i];
    }

    for (int i=0; i<nums.size(); i++) {
        products.push_back(left[i] * right[i]);
    }
    
    return products;

    }
};
