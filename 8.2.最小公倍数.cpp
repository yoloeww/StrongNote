#include <iostream>
using namespace std;
int getmin(int a,int b) {
    return b ? getmin(b, a % b) : a;
}
int main() {
    int a, b;
    cin >> a >> b;
    int x = a * b;
    int t = getmin(a,b);
    cout << x / t << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")
