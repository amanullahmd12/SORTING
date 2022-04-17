//
//  main.cpp
//  Meriging.cpp
//
//  Created by MD AMANULLAH on 17/04/22.
//
//Meriging Two Array In a single array

#include <iostream>

using namespace std;

void Merging (int A[],int B[] , int m , int n)
{

    int i,j,k;
    i=j=k=0;
    int C[100];
    
    while(i<m && j<n)
    {
        if(A[i]<B[j])
       {
           C[k++]=A[i++];
       }
        else
        {
            C[k++]=B[j++];
        }
    }
    for(;i<m;i++)
    {
        C[k++]=A[i];
    }
    for(;j<n;j++)
    {
        C[k++]=B[j];
    }
    
    cout<<"Merged Array "<<endl;
    for (int y=0;y<k;y++)
    {
        cout<<C[y]<<" ";
    }
}
int main()
{
    int m;
    cout<<"Enter size of First Array ";
    cin>>m;
    int n;
    cout<<"Enter size of second array ";
    cin>>n;
    int A[m];
    int B[n];
    
    cout<<"Enter Elements of First Array";
    for (int i=0;i<m;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter Elements of Second Array";
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }
    Merging(A, B, m, n);
    return 0;
}
