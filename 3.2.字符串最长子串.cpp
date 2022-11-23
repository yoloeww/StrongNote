#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
    cout<<"input:s="<<endl;
	cin >> s;
	int len_s = s.size();
	int i=0, j=0;
    string s0="";
    string maxLen;
	while (i < len_s)
	{
		if (s[i] >= '0'&& s[i] <= '9')
		{
			j = i;
			int len = 0;//数字的位数
			while (s[i] >= '0'&& s[i] <= '9')
			{
				i++;
				len++;
			}
			s0 = s.substr(j, len);//获取子串
            if(s0.length()>=maxLen.length()){
                maxLen=s0;
            }
		}
		else
		{
			i++;
		}
	}
    cout<<"output："<<maxLen<<endl;
	return 0;
}
