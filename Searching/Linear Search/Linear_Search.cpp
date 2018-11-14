#include<iostream>
 
using namespace std;
 
int main()
{
    int A[100],n,x,flag=0,pos=0;
    cout<<"How many elements?\n";
    cin>>n;
    cout<<"\nEnter elements of the array\n";
    
    for(int i=0;i<n;++i)
        cin>>A[i];
    
    cout<<"\nEnter element to search : ";
    cin>>x;
    
    for(int i=0;i<n;++i)
    {
        if(A[i]==x)
        {
            flag=1;
            pos=i+1;
            break;
        }
    }
    
    if(flag==1)
        cout<<"\nElement is found at position : "<<pos;
    else
        cout<<"\nElement not found!!!!";
        
    return 0;
}
