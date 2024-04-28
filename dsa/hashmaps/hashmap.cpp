#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    // 10^6 max limit inside main
    // 10^7 globaly 
    // for boolean 10^7 in main
    // for global is 10^8 in global
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int hash[13]={0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]+=1;
    }
    
    cout<<endl;
    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        // cout<<endl;
        cout<<"Count of that is "<<hash[number]<<endl;
    }
    
    
    return 0;
}
