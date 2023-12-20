#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
 int i;
 double m,g,t,h,hn,KE,PE;
 double u,v;
 FILE *fptr;
 fptr=fopen("coordinates.dat","w");
 m=10.0; 
 g=9.8;
 h=10.0; 
 t=0.1; 
 u=0.0; 
 for(i=0;i<100;i++)
 {
 v=u+g*t; 
 KE=0.5*m*v*v;
 hn=u*t+0.5*g*t*t; 
 h=h-hn; 
 PE=m*g*h; 
 u=v; 
 /* If h = 0.0, then we have reached the ground */
 if(h<=0.0)
 break;
 fprintf(fptr,"%lf\t%lf\n",KE,PE);
 }
 fclose(fptr);
}
