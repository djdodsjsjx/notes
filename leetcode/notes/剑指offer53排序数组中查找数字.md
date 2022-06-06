# 排序数组中查找数字
```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int count = 0, site = 0, n = nums.size();
        if (n == 0) return 0;
        for (int i = 0, j = n - 1; i <= j; ) {
            int mid = (i + j) >> 1;
            if (nums[mid] < target) i = mid + 1;
            else if (nums[mid] > target) j = mid - 1;
            else {
                site = mid;  //先找到存在target的位置，然后向两端找
                break;
            } 
            if (i > j) return 0;   //若找不到，则返回0
        }
        for (int i = site; i >= 0 ; --i) {
            if (nums[i] < target) break;
            count++;
        }
        for (int i = site + 1; i < n; ++i) {
            if (nums[i] > target) break;
            count++;
        }
        return count;
    }
};
```