#include <stdio.h>

int main(){
    float miles, km, avgS;
    int h,m,s;
    scanf("%f",&miles);
    scanf("%d %d %d",&h,&m,&s);
    km=miles*1.6;
    h=h+ m/60 + s/3600;
    avgS=km/h;
    printf("The avg speed is: %.2f km/h\n", avgS);
    return 0;
}