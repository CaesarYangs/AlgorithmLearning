class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1= m-1;;
    int p2= n-1;
    nums1.resize(m+n);
    int pos = m+n-1;

    while (p1>=0 && p2>=0){
        if(nums1[p1]<nums2[p2]){
            nums1[pos] = nums2[p2];
            --p2;
            --pos;
        } else{
            nums1[pos] = nums1[p1];
            --p1;
            --pos;
        }
    }

    while (p2>=0){
        nums1[pos--] = nums2[p2--];
    }


    }
};
