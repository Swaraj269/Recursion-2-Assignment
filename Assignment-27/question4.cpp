// Given an array of integers, print a sum triangle using recursion from it such that the first level has
// all array elements. After that, at each level the number of elements is one less than the previous
// level and elements at the level will be the sum of consecutive two elements in the previous level.

#include <iostream>
#include <vector>
using namespace std;

void printarray(vector<int>v, int n){
    if(n<0) return;
    printarray(v,n-1);
    cout<< v[n]<< " ";
}
void sum(vector<int>& v, int n){
    if(n<0) return;
    sum(v,n-1);
    v[n]=v[n]+v[n+1];
}
void triangleprint(vector<int>v, int n){
    if(n<0) return;
    cout<<endl;
    printarray(v,n);
    sum(v,n);
    return triangleprint(v,n-1);
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
    triangleprint(v,n-1);
    return 0;
}