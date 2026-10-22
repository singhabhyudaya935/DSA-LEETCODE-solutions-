class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int>arr(nums1.size()+nums2.size());
        for(int i=0;i<nums1.size();i++){
            arr[i]=nums1[i];
        }        
    for(int i=0;i<nums2.size();i++){
        arr[nums1.size()+i]=nums2[i];
    } sort(arr.begin(),arr.end());
   int low=0; int high=arr.size()-1;
        int mid=low+(high-low)/2;
        if(arr.size()%2==1){
            return arr[mid];
        }
        else{
            return (arr[mid]+arr[mid+1])/2.0;
        }
    }
};