 #include<iostream>
 #include<vector>
using namespace std;
  void moveZeroes(vector<int>& nums) {
       
        int i=0;
        for(int j=0;j<nums.size();j++)
        {  
        
            if(nums[j]!=0)
            {
               swap(nums[j],nums[i]);

               i++;
               
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