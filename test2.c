#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct sinhvien{
  char ma[20];
  char ten[30];
  double gpa;
  char lop[20];
};
typedef struct sinhvien sv;
int main(){
  sv a;
  scanf("%s",&a.ma);
  getchar();
  gets(a.ten);
  scanf("%lf%s",&a.gpa,&a.lop);
  printf("%s %s %.2lf %s\n",a.ten,a.ma,a.gpa,a.lop);
  // scanf("\n");
  return 0;
}