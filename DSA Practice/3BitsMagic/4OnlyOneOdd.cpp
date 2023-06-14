// Find the only odd occuring number 

// i/p : arr[]={4,3,4,4,4,5,5}
// o/p: 3

//i/p : arr[]={8,7,7,8,8}
// o/p : 8

#include<iostream>
using namespace std;

int OneNAIVE(int arr[] ,int n){
     for (int i = 0; i < n; i++)
     {
          int count=0;
          for (int j = 0; j < n; j++)
          {
               if(arr[i]==arr[j]) count++;
          }
          if(count%2!=0) return count;
          
     }
     
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
     cin>>arr[i];
   }
   cout<<OneNAIVE(arr,n);
   

    return 0;
}