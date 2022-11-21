#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    vector <long long> a;
    a.resize(3*n);
    for(int i = 0;i < 3*n;i++)
    {
        cin >> a[i];
    }
    std::sort(a.begin(),a.end());
    for(int i = 0;i < n;i++)
    {
         sum += a[a.size()-(2*(i+1))]; 
    }
    cout <<sum<<endl;
    return 0;
}
