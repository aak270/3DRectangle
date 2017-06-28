#include <stdio.h>
#include <stdlib.h>
#include <math.h>



/********structs*************/

struct point3D{
	double x;
	double y;
	double z;
};

//with all angle 90 degree
struct rectangle3D{
	//point placement
	struct point3D a;
	struct point3D b;
	double height;
	//angle value for
	double angleA;	//base at point a
	double angleG;	//base with edge at left side
	double angleH;	//base with edge at right side
};



/********functions***********/

//calculate the surface area for 3d rectangle
double getSurfaceArea(struct rectangle3D){
	
}

//calculate the volume for 3d rectangle
double getVolume(struct rectangle3D){
	
}


//\\\\\\\constructor///////\\

struct rectangle3D* cube(struct point3D* pA, struct point3D* pB){
	struct rectangle3D* obj = (struct rectangle3D*) malloc(sizeof(struct rectangle3D));
	
	if(fabs(pA->x - pB->x) != fabs(pA->y - pB->y)) return obj;
	
	double h = fabs(pA->x - pB->x);
	
	obj->a = *pA;
	obj->b = *pB;
	obj->height = h;
	obj->angleA = 90;
	obj->angleG = 90;
	obj->angleH = 90;
	
	return obj;
}

struct rectangle3D* prism(struct point3D* pA, struct point3D* pB, double h){
	struct rectangle3D* obj = (struct rectangle3D*) malloc(sizeof(struct rectangle3D));
	
	obj->a = *pA;
	obj->b = *pB;
	obj->height = h;
	obj->angleA = 90;
	obj->angleG = 90;
	obj->angleH = 90;
	
	return obj;
}

struct rectangle3D* parallelepiped(struct point3D* pA, struct point3D* pB, double h, double aA, double aG, double aH){
	struct rectangle3D* obj = (struct rectangle3D*) malloc(sizeof(struct rectangle3D));
	
	obj->a = *pA;
	obj->b = *pB;
	obj->height = h;
	obj->angleA = aA;
	obj->angleG = aG;
	obj->angleH = aH;
	
	return obj;	
}


void members(){
	printf("Anggoro Rahardiyawan\n");
	printf("Lek Bunheng\n");
	printf("Prohim Tam\n");
}



/********main****************/

int main(void) {
	struct point3D a = {
		5,
		0,
		0
	};
	struct point3D b = {
		0,
		5,
		0
	};
	struct rectangle3D cube1 = *cube(&a, &b);
	
	return 0;
}
