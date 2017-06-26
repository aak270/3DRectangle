#include <stdio.h>



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
	//angle value for base and edge
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


/******constructor******/

struct rectangle3D cube(){
	
}

struct rectangle3D prism(){
	
}

struct rectangle3D parallelepiped(){
	
}

void members(){
	printf("Anggoro Rahardiyawan\n");
	printf("Lek Bunheng\n");
	printf("Prohim Tam\n");
}



/********main****************/

int main(void) {
	
	return 0;
}
