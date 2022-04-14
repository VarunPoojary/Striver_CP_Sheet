// https://codeforces.com/contest/514/problem/A
// To convert char to digit subtract '0' and to convert digit to char add '0'

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;

    for(int i=0; i<s.size();i++)
    {
        int digit = s[i] - '0';
        if(i==0 && digit == 9)
        {
            s[i] = digit + '0';
        }
        else if( digit < 9-digit)
        {
            s[i] = digit + '0';
        }
        else
        {
            s[i] = (9 - digit) + '0';
        }
    }

    cout<<s<<endl;

    return 0;
}
