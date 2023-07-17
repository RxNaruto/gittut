#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,5,6};
    cout<<"arr is "<<endl;
    for(int i=0;i<(sizeof(arr))/sizeof(arr[0]);i++){
        cout<<arr[i]<<endl;
    }
 return 0;
}