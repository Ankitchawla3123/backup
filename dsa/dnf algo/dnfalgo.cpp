#include <iostream>
using namespace std; 

// use 3 pointers high mid and low
// 0 to low - 1 will be 0
// low to mid-1  will be 1 
// high + 1 to n-1 will be 2
int main(int argc, char const *argv[])
{
    int arr[10]={0,1,0,1,0,2,2,0,1,0};
    int low=0;
    int mid=0;
    int high=9;
    while (mid<=high)
    {
        if (arr[mid]==0)
        {
            int temp=arr[mid];
            arr[mid]=arr[low];
            arr[low]=temp;
            mid++;
            low++;
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else{
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
        
        
    }
    for (int i = 0; i <10; i++)
    {
        cout<<arr[i];
    }
    
    
    return 0;
}
