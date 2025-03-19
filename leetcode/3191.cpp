#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
    public:
        int minOperations(vector<int>& nums) 
        {
            int tam = nums.size();
            int cont = 0;
            for(int i = 0; i < tam - 2; i++)
            { 
                if(nums[i]==0)
                {
                    nums[i] = 1 - nums[i];
                    nums[i+1] = 1 - nums[i+1];
                    nums[i+2] = 1 - nums[i+2];
                    cont++;
                }
            }
            for (int i = tam - 2; i < tam; i++)
            {
                if(nums[i] == 0)
                    return -1;
            }
            return cont;
        }
};

int main()
{
    vector<int> nums = {0,1,1,1,0,0};
    int result;
    Solution sol;
    result = sol.minOperations(nums);
    cout << "resultado: " << result << endl;
    return 0;
}