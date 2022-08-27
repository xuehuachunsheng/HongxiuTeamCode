package java_everyday;

public class BinarySearch {

}

//暴力解决，用一个循环直接匹配，时间复杂度度为O(n),不建议使用
class Solution1 {
    public int search(int[] nums, int target) {

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == target)
                return i;
        }
        return -1;
    }
}

//二分查找 时间复杂度为O(log2n)
class Solution2 {
    public int search(int[] nums, int target) {

        int left = 0;
        int right = nums.length - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target){
                return mid;
            }
            if (nums[mid] < target) {
                left = mid + 1;
            }
            if(nums[mid] > target) {
                right = mid - 1;
            }
        }
        return -1;
    }
}

//二分查找 时间复杂度为O(log2n)
class Solution3 {
    public int search(int[] nums, int target) {
        int left = 0, right = nums.length - 1;
        while (left <= right) {
            int mid = (right - left) / 2 + left;
            int num = nums[mid];
            if (num == target) {
                return mid;
            } else if (num > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return -1;
    }
}
