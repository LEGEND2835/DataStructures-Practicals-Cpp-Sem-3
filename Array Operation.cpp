#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n=5, pos = 2, val = 45;
    cout<<"Enter array elements : "<<endl;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"The array is : "<<endl;
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\nInserting "<<val<<" at position "<<pos<<endl;
    for (int i=n; i>pos; i--)
        arr[i]=arr[i-1];
    n++;
    arr[pos]=val;
    cout<<"After insertion : ";
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\nDeleting "<<val<<" at position "<<pos<<endl;
    for (int i=pos;i<n-1;i++)
        arr[i]=arr[i+1];
    n--;
    cout<<"After deletion : "<<endl;
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    int posi,valu;
    cout<<"\nEnter the value which is to be entered for replace\n";
    cin>>valu;
    cout<<"Enter the replace position\n";
    cin>>posi;
    arr[posi]=valu;
    cout<<"Array after replacing: "<<endl;
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}