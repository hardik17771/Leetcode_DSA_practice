#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i,j,k=0;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
               nums1[k]=nums1[i];
               k++;
               i++;
            }
            else
            {
                nums1[k]=nums2[j];
                k++;
                j++;
            }
        }
        while(i<m)
        {
            nums1[k++]=nums1[i++];
        }
        while(j<n)  
        {
            nums1[k++]=nums2[j++];
        }
    }
};