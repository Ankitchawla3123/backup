#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
     string s;
     cin>>s;
     int hash[26]={0};
     //256 for all chars
     for (int i = 0; i < 26; i++)
     {
        hash[s[i]-'a']+=1;
     }

     char b;
     cin>>b;
     cout<<hash[int('a')-int(b)];

    return 0;
}
