
#include<iostream>
#include <vector>
#include <unordered_set>
using namespace std;


// The unordered_set C++ has a time complexity of O(1) on average for all operations, 
// while the set in C++ has an average time complexity of O(log(n)). 
// But both these have a space complexity of O(n), where n is the number of elements stored in them.


class Solution {
public:
    //vector<int> &vect is a reference variable
    //Ref variable is decalred when instainated and cannot be NULL
    // Cannot be changed to refer to another variable
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> res;
        for(auto &num : nums)
        {
            res.insert(num);
        }
        return nums.size() > res.size();
    }
};

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    std::vector<int> nums;
    cout<<"Enter the elements of the array"<<endl;
    int val;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    Solution obj1;
    bool result = obj1.containsDuplicate(nums);
    cout<<result;
    return 0;
}