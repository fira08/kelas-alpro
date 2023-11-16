#include<stdio.h>
#include<math.h>
#define PI 3.14159
void HitungKelilingLingkaran(double radius,double *K)
{  
    *K=2 *PI *radius;
}
int main(void){
    double R;
    double keliling;
    printf("masukkan niali jari jari lingkaran:");
    scanf("%lf",&R);
    HitungKelilingLingkaran(R, &keliling);
    printf("Keliling lingkaran dengan jari jari %lf:%lf\n",R,keliling);
    return 0;
}