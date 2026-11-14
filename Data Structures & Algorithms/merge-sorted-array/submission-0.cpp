class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0) {
            std::sort(nums1.begin(), nums1.end());
        } else if (m == 0) {
            nums1 = nums2;
            std::sort(nums1.begin(), nums1.end());
        } else {
            int index = m;
            int count = n;
            nums1.insert(nums1.begin() + index, nums2.begin(), nums2.end());
            while (count > 0) {
                nums1.pop_back();
                count-=1;
            }
            std::sort(nums1.begin(), nums1.end());
        }
    }
};