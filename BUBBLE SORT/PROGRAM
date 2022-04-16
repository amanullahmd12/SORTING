//
//  main.cpp
//  BubbleSort.cpp
//
//  Created by MD AMANULLAH on 17/04/22.
//

#include <iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp =*x;
    *x=*y;
    *y=temp;
}

void BubbleSort(int A[],int n)
{
 
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag++;
            }
            
        }
        if(flag==0)
        {
            break;
        }
    }
 
}

int main()
{
    int n;
    cout<<"Enter Size of array "<<endl;
    cin>>n;
    
    int A[n];
    cout<<"Enter Elemnts of Array ";
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"\n";
    
    
    //int A[]={6,8,3,9,1,2,4};
    //int n=7;
   
    cout<<"Elemnts of Array are ";
    
    for (int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";
    
    BubbleSort(A,n);
    cout<<"Sorted Array : ";
    for (int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";
}
