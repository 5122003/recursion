#include<iostream>
#include<vector>
using namespace std;
void printsubarray_util(vector<int>&nums,int start ,int end){


//base case

if(end ==nums.size()){
    return;
}

//1 case solve kardo
for(int i=start;i<=end;i++){
    cout<<nums[i]<<" ";
}
cout<<endl;
printsubarray_util(nums,start,end+1);
}

void printsubarray(vector<int>&nums){
    for(int start=0;start<nums.size();start++){
        int end=start;
        printsubarray_util(nums,start,end);
    }
}
int main(){
    vector<int>nums{1,2,3,4,5};
    printsubarray(nums);
    return 0;

}