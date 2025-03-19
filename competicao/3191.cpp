#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int tam = nums.size();
            int cont = 0;
            for(int i=0; i<tam-2; i++){ // Verifique até o antepenúltimo elemento
                if(nums[i]==0){
                    nums[i] = 1 - nums[i];
                    nums[i+1] = 1 - nums[i+1];
                    nums[i+2] = 1 - nums[i+2];
                    cont++;
                }
            }
        }
    };

int main()
{
    vector<int> nums = {0,1,1,1};
    int result;
    Solution sol;
    result = sol.minOperations(nums);
    return 0;
}