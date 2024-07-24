// Contigous subarray sum

#include<bits/stdc++.h>
using namespace std;

int kadaneAlgorithm(vector<int>& arr){
    // Taking the size of vector
    int size = arr.size();

    // This will store the ongoing sum
    int sum = 0;

    // This is the answer variable which might contain sub array of length 0 if all the elements are negative 
    int ans = 0;

    // If we want our sub array to contain atleast one element then we can take ans, sum as very large negative variable, in c++ we can take INT_MIN 

    // loop to check continuous sum
    for(int i=0; i<size;i++){
        sum+=arr[i];
        // Taking maximum of continuous sum at each iteration
        ans = max(ans,sum);

        // If we know our sum is getting negative then we can think of removing all previous elements
        if(sum<0)
            sum = 0;
    }
    return ans;
}
int main(){
    vector<int>arr = {1,4,7,4,-6,7,-3};
    cout<<"Maximum Contiguous sub array Sum is: ";
    cout<<kadaneAlgorithm(arr)<<endl;
}