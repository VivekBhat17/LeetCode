#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:vector<int> result;
       void twoSum(vector<int>& nums, int target) {
           for(int i = 0; i<nums.size()-1; i++){
               for(int j = i+1; j < nums.size(); j++){
                   if(nums[i] + nums[j] == target){
                       result.push_back(i);
                       result.push_back(j);
                    }    
                }  
            } 
         }
    void Display(){
        for(int  i = 0; i < result.size(); i++){
            cout<<result[i]<<" ";
        }
    }
};

int main(){
Solution n;
vector <int> t = {3,2,4};
int target = 6;
n.twoSum(t,target);
n.Display();
}