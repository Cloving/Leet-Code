/* Product of Array Except Self（除自身以外数组的原型） */


class Solution {
public:
  vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> res(nums);
    res[nums.size() - 1] = 1;
    for (int i = nums.size()-2; i >= 0; i--) {
      res[i] = nums[i+1] * res[i+1];
    }
    for (int i = 1; i < nums.size(); i++) {
      res[i] *= nums[i-1];
      nums[i] *= nums[i-1];
    }
    return res;
  }
};