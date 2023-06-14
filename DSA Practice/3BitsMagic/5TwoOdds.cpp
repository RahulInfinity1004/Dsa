// Find the Odd apperaring number 

// i/p : arr[] = {20,15,20,16}
// o/p : 15,16

#include<iostream>
using namespace std;

void TwoOddBetter(int arr[],int n){
     int Xor=0,res1=0,res2=0;
     for (int i = 0; i < n; i++)
     {
          Xor= Xor+arr[i];
     }
     int Sn=Xor & ~(Xor -1);

     for (int i = 0; i < n; i++)
     {
          if ((arr[i]&Sn)!=0)
          {
               res1 = res1 ^ arr[i];
          }
          else{
               res2 = res2^arr[i];
          }  
     }
     cout<<res1<<" "<<res2<<endl;
     
     
     
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
//    cout<<TwoOddBETTER(arr,n);
TwoOddBetter(arr,n);

   

    return 0;
}