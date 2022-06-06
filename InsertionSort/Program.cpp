//
//  main.cpp
//  InsertionSort.cpp
//
//  Created by MD AMANULLAH on 17/04/22.
//

#include <iostream>
using namespace std;

void InsertionSort(int A[],int n)
{
    for (int i=1;i<n;i++)
    {
        int j=i-1;
        int x=A[i];
        
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}

int main()
{
    int n;
    cout<<"Enter Size if Array ";
    cin>>n;
    int A[n];
    cout<<"Enter your Elements of array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Elements of array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    InsertionSort(A, n);
    cout<<"Sorted array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
