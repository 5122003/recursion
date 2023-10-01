#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&arr,int& s, int& e,int& target){
    //base case
    if(s>e)
    return -1;
    int mid=(s+e)/2;
    if(arr[mid]==target)
    return mid;
    if(arr[mid]<target){
        s=mid+1;
        int ans=binarysearch(arr,s,e,target);
        return ans;
    }
    else{
        e=mid-1;
        int ans=binarysearch(arr,s,e,target);
    }
     
}

int main(){
    vector<int> v{10,20,40,60,70,80,99};
    int target=70;
    int n=v.size();
    int s=0;
    int e=n-1;
    int ans=binarysearch(v,s,e,target);
    cout<<"ans is:"<<ans<<endl;
}