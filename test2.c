#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct hocsinh{
 char ten[30];
 double diem;
};
typedef struct hocsinh hs; 
//dung con tro trong STRUCT
void nhap2(hs *x){ 
 getchar(); // dung getchar de loai bo dau enter tu scanf n
  gets(x->ten);
  scanf("%lf",&x->diem);
}
void in(hs a){
printf("%s %.2lf\n",a.ten,a.diem);
}

int main(){
hs a[100]; // mang a 100 kitu
int n;
scanf("%d", &n);
for (int i=0;i<n;i++)  nhap2(&a[i]); //chay tu 1 den n trong STRUCT
for (int i=0;i<n;i++) in(a[i]);

}