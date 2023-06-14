 #include<iostream>
#include<vector>
using namespace std;
 void moveZeroes(vector<int>& nums) {
        int i,j,temp=0;
        while(i<nums.size())
        {
            if(nums[j]==0)
            {
              j++;
            }
            else
            {
               swap(nums[i],nums[j]);

               i++;
               j++;
            }
        }
        for(int k=0;k<nums.size();++k)
        {
            cout<<nums[k]<<endl;
        }
    }
    int main()
    {
        vector<int> numm={0,1,0,3,12};
        moveZeroes(numm);

    }