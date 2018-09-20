#include<stdio.h>
#include<math.h>

int main(){

float r1 = 8.7, r2 = 52.0, a1,a2,ar;

a2 = 3.1415 * pow(r2,2);
a1 = 3.1415 * pow(r1,2);
ar = a2-a1;
printf("El area verde es = %f",ar);


return 0;
}
