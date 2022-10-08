class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n = nums1.length, m = nums2.length;
        int i=0,j=0,k=0,size=((n+m)/2)+1;
        int[] nums3 = new int[size];
        while(i<n&&j<m&&k<size){
            if(nums1[i]<nums2[j]){nums3[k]=nums1[i];i++;k++;}
            else{nums3[k]=nums2[j];j++;k++;}
        }
        if(k<size){
            while(i<n&&k<size){nums3[k]=nums1[i];i++;k++;}
            while(j<m&&k<size){nums3[k]=nums2[j];j++;k++;}
        }
        if((n+m)%2!=0)return (double)nums3[size-1];
        else return (double)(nums3[size-1]+nums3[size-2])/2.0;
    }
}
