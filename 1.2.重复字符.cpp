# include<iostream>
using namespace std;
int main()
{
    string str1;
    string str2;
    string ret;
    getline(cin,str1);
    getline(cin,str2);
    int hashtable[256] = {0};
    for(int i = 0;i < str2.size();i++)
    {
        hashtable[str2[i]]++;
    }
    for(int i = 0;i < str1.size();i++)
    {
        if(hashtable[str1[i]] == 0)
        ret += str1[i];
    }
    cout << ret << endl;
    return 0;
}
   
// 64 位输出请用 printf("%lld")
