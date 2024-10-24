#include <iostream>
#include <vector>
using namespace std;
 void moveZeroes(vector<int>& nums) {
        int zero = 0;
         for(int i=0 , j=0; i<nums.size() ; i++){
            if(nums[i] == 0){
                zero++;
                continue;
            }
            nums[j] = nums[i];
            j++;
         }
        for(int i = nums.size()-1; zero>0; i--){
            nums[i] = 0;
        }
        for(int i: nums){
            cout<<i<< " ";
        }

    }

int main(){
    int test[] = {0,1,0,3,12};
    vector<int> nums ;
    for(int n:test){
        nums.push_back(n);
    }

    moveZeroes(nums);

    return 0;

}