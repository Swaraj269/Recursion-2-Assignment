// Print all the elements of an array in reverse order.

#include <iostream>
#include <vector>
using namespace std;

void reverseprint(vector<int>v, int n){
    if(n<0) return;
    cout<< v[n] << " ";
    reverseprint(v, n-1);
}
int main(){
    vector<int> v;
    int n;
    cout<< "Enter the size of an array: ";
    cin>> n;
    cout<< "Enter the elements of an array: ";
    for(int i=0; i<n; i++){
        int x;
        cin>> x;
        v.push_back(x);
    }
    reverseprint(v,v.size()-1);
    return 0;
}