#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&arr){
    for(auto num: arr)  
        cout<<num<<" ";
    cout<<endl;
}
vector<int> RotatedArray (vector<int>arr, int k){
    int size = arr.size();
    vector<int>ans(size);
    for(int i=0;i<size;i++){
        ans[(i+k)%size] = arr[i];
    }
    return ans;
}

int main(){
    // For Taking Custom Input
    /*
        cout<<"Enter Size of Array: ";
        int size;
        cin>>size;
        vector<int>arr(size);
        cout<<"Enter Array Elements Separated by space"<<endl;
        for(int i=0;i<size;i++)
            cin>>arr[i];
        int k;
        cout<<"Enter by how much you want to rotate the array: ";
        cin>>k;
        vector<int>ans = RotatedArray(arr,k);
        cout<<"Original Array: ";
        print(arr);
        cout<<"Reversed Array: ";
        print(ans);
    */
    vector<int>arr = {1,2,3,4,5,6,7};
    int k = 3;
    vector<int>ans = RotatedArray(arr,k);
    cout<<"Original Array: ";
    print(arr);
    cout<<"Reversed Array: ";
    print(ans);
}