// Linear Search in C++

#include <iostream>
using namespace std;

int linarsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++){
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
    int key;
    cout<<"enter ther key"<<endl;
    cin>>key;
   cout<<"index number : "<<linarsearch(arr,n,key)<<endl;
   return 0;

}