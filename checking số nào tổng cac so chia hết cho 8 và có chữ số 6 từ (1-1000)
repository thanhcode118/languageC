#include <stdio.h>
#include <math.h>

int check1(int n){
while(n){

if (n%10==6) return 1;
n/=10;
}
 return 0;
}

int check2(int n){
 int sum=0;
while (n){
  sum+=n%10;
  n/=10;
}
return sum%8==0;
}

int main (){
for (int i=1;i<=1000;i++){
  if (check1(i)==1 && check2(i)==1) printf("%d\n",i);
}
return 0;
}

