// Count Set Bits 

// i/p n=5  000101
// o/p 2

// i/p n=7   000111
// o/p 3

#include<iostream>
#include <bitset>
using namespace std;

int CountBitsSetNAIVE(int n){
     int res=0;
     while (n>0)
     {
          if(n%2!=0){  // if((n&1)==1)   
         res++;           // res = res+ (n&1)
          }
         n/=2;       // n>>1
     }
     return res;
}
// Brian Kerningam's Algorithm (n&(n-1))
int CountBitsBETTER(int n){
     int res=0;
     while (n>0)
     {
          n = (n&(n-1));
          res++;
     }
     return res;
     
}

// Lookup Table method 
int table[256];
void initalize(){
     table[0]=0;
     for (int i = 1; i < 256; i++)
     {
          table[i]=(i&1) + table[i/2];
     }   
}
int count(int n){
     int res = table[n&0xff];
     n=n>>8;
     res = res+ table[n&0xff];
     n=n>>8;
     res = res+ table[n&0xff];
     n=n>>8;
     res = res+ table[n&0xff]; 
     n=n>>8;
     return res;
}


int main()
{
   int n;
   cin >> n;
   cout<<CountBitsSetNAIVE(n)<<endl;
   cout<<"-----------"<<endl;
   cout<<CountBitsBETTER(n)<<endl;
   cout<<"-----------"<<endl;
   cout<<count(n)<<endl;

    return 0;
}

