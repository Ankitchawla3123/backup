#include <iostream>
#include <map>

using namespace std;
int main(int argc, char const *argv[])
{
    //    // Create a map of strings to integers
    // map<string, int> mp;
 
    // // Insert some values into the map
    // mp["one"] = 1;
    // mp["two"] = 2;
    // mp["three"] = 3;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    map <int,int> mapp;
    for (int i = 0; i < n; i++)
    {
        mapp[arr[i]]++;
    }
    for(auto it : mapp){
        cout<<it.first<<" "<<it.second<<endl;
    }


    return 0;
}
