#include <stdio.h>
int main(){
	float edge,length,width,radius;
	float PI = 3.14;
	printf("edge =");
	scanf("%f", &edge);
	printf("length =");
	scanf("%f", &length);
	printf("width =");
	scanf("%f", &width);
	printf("radius =");
	scanf("%f", &radius);
	float sp = 4*edge;
	printf("chu vi hinh vuong = %f",sp);
	float sa = edge*edge;
	printf("dien tich hinh vuong = %f",sa);
	float rp = 2*(length+width);
	printf("chu vi hinh chu nhat = %f",rp);
	float ra = length*width;
	printf("dien tich hinh chu nhat = %f",ra);
	float cc = 2*PI*radius;
	printf("chu vi hinh tron = %f",cc);
	float ca = PI*radius*radius;
	printf("dien tich hinh tron = %f",ca);
	return 0;
}