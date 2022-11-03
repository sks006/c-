#include <iostream>
using namespace std;

int binnarysearch(int arr[],int n,int key)
{
 for(int i=0;i<=n;i++){
    int mid=(i+n)/2;

        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            /* code */
            n=mid-1;
        }
        else
        {
            n=mid+1; 
        }
        
    }
    return -1;

}
int main ()
{
   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
    int key;
    cout<<"enter ther key"<<endl;
    cin>>key;
   cout<<"index number : "<<binnarysearch(arr,n,key)<<endl;
   return 0;



return 0;
}