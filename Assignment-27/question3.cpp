#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n) {
    if(n==1) return "1";
    string ans = "";
    string smallans = countAndSay(n-1);
    for(int i = 0; i<smallans.size();){
        int count = 1;
        int j = i+1;
        while (j< smallans.size() && smallans[i]==smallans[j]){
            count++;
            j++;
        }
        ans += to_string(count) + smallans[i];
        i = j;
    }
    return ans;
}
int main(){
    int n;
    cout<< "Enter the number: ";
    cin >> n;
    cout<<countAndSay(n);
    return 0;
}