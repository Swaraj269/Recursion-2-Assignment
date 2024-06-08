// Print index of a given element in an array. If not present, print -1.

#include <iostream>
#include <vector>
using namespace std;

int found(vector<int>v, int n, int k){
    if(n<0) return -1;
    if(v[n]==k) return n;
    return found(v,n-1,k);
}
int main(){
    int n;
    cout<< "Enter the size of the array: ";
    cin>>n;
    vector<int> v;
    cout<< "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<< "Enter the target element: ";
    cin>>k;
    cout<< found(v,n-1,k);
    return 0;
}