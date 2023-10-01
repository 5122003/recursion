#include<iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[],int n, int i, int& maxi){
    //base  case
    if(i>=n){
        //array agar khatam hogaya ,poora traverse hogaya toh wapas aajo
        return ;
    }
    //1 case solve karna h
    //current element ko check karo for max
    if(arr[i]>maxi){
        maxi=arr[i];

    }
    //baaki recursion sambhal lega 
    findMax(arr,n,i+1, maxi);
}
void findMin(int arr[],int n, int i, int& Mini){
    // base case
    if(i>=n){
        return;


    }
    //ek case solve karo
    Mini=min(Mini,arr[i]);
    ///uske baad khud sambhal lega 


    findMin(arr,n, i+1, Mini);


}

int main(){
    int arr[]={10,30,21,44,32,6,19,66};
    int n=8;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int i=0;
    findMax(arr,n,i, maxi);
    findMin(arr, n, i, mini);

    cout<<"maximum number is:"<<maxi<<endl;
    cout<<"minimum number is:"<<mini<<endl;
    

}