#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    cout<<s.erase(s.find("\\"));
    return 0;
}
