
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int tong(int n){
int sum=0;
while(n){
sum+=n%10;
n/=10;
}
cout<<sum<<endl;
return sum;
}
bool nt(int n){
   if (n<2) return 0;
   for (int i=2;i<=sqrt(n);i++){
   if (n%i==0) return 0;
   }
   return 1;
}
int main(){ 
   int n=100;
   if (nt(tong(n))){
 cout<<"YES";
   }
   else {cout<<"NO";}
   return 0;
}



