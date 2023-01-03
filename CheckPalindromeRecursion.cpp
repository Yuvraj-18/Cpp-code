#include<iostream>

using namespace std;

int CheckPalindrome(string& str, int s, int e)
{
    if(s>e)
        return 0;
    
    if(str[s] != str[e])
        return 0;

    if(str[s] == str[e])
        s++;
        CheckPalindrome(str,s,e);
}

int main()
{
    string str = "aabcaa";

    int ans = CheckPalindrome(str, 0, str.length()-1);

    if(ans )
        cout << "Yes";
    else
        cout << "No";
}