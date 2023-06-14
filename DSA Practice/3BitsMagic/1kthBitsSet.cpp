// check if kth bit is set or not

// n=5 k=1  5--> 000101
// o/p YEs

// n=8 k=2  8--> 001000
// o/p YEs
#include<iostream>
using namespace std;

// First Method (Left Shift)
void kthBits(int n,int k){
     if((n & (1<<(k-1)))!=0  ){
          cout<<"YES"<<endl;
     }else cout<<"NO"<<endl;
}

// Second Method --> Right shift
void kthBits2(int n,int k){
     if( n>>(k-1) & 1 ==1 ){
          cout<<"YES"<<endl;
     }else cout<<"NO"<<endl;
}

int main()
{
   int n,k;
   cin >> n>>k;
   kthBits(n,k);
   cout<<"-------"<<endl;
    kthBits2(n,k);

    return 0;
}