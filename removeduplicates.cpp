#include <iostream>
#include <list>
#include <bits/stdc++.h>

using std::vector;

class Solution
{
public:
    Solution()
    {
    }
    int removeDuplicates(std::vector<int>& nums)
    {
        vector<int>::iterator i = nums.begin();
        for(; i!=nums.end(); i++)
	{
            //std::cout << "In loop for i" << std::endl;
            vector<int>::iterator j = i+1;
            for(;j!=nums.end();)
	    {
		//std::cout << "i = " << *i << " j = " << *j << std::endl;
                if(*i == *j)
		{
                    nums.erase(j);
		}
		else
		{
                    //j++;
		    break;
		}
	    }
	}
	return nums.size();
    }
    void displayAll(vector<int>& nums)
    {
        vector<int>::iterator i=nums.begin();
        for(;i!=nums.end();i++)
        {
            std::cout << " " << *i ;
	}
	std::cout << std::endl << "Above are the contents of vector" << std::endl;
    }
};

int main()
{
        vector<int> nums = {0,0,1,1,1,2,2,3,3,3,3,3,3,3,4};
	Solution objSolution;
	objSolution.displayAll(nums);
	objSolution.removeDuplicates(nums);
	objSolution.displayAll(nums);
}

