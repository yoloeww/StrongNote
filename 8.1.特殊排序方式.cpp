#include <iostream>
#include <vector>
using namespace std;
int n;
vector<string> s;
bool process1() {
   for (int i = 1; i < n ;i ++) {
        if (s[i - 1] >= s[i])
        return false;
   }
   return true;
}
bool process2() {
    for (int i = 1; i < n ;i ++) {
        if (s[i - 1].size() >= s[i].size())
        return false;
   }
   return true;
}
int main() {
    cin >> n;
    s.resize(n);
    for(auto& str : s)
    cin>>str;
 
    if (process1() == true && process2() == true) {
        cout << "both" << endl;
        return 0;
    }
    else if (process1() && !process2()) {
        cout << "lexicographically" << endl;
        return 0;
    }
    else if (process2() && !process1()) {
        cout << "lengths" << endl;
        return 0;
    }
    else if(!process1() && !process2()) {
        cout << "none" << endl;
    }
    return 0;
}
