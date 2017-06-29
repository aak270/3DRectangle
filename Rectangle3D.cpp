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
	/*
	//using angle
	double angleA;	
	double angleG;	
	double angleH;
	*/
};



/********functions***********/

//calculate the surface area for 3d rectangle
double getSurfaceArea(struct rectangle3D){
	
}

//calculate the volume for 3d rectangle
double getVolume(struct rectangle3D){
	
}


/*
//------constructor--------\\

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
*/

void members(){
	printf("Anggoro Rahardiyawan\n");
	printf("Lek Bunheng\n");
	printf("Prohim Tam\n");
}



/********main****************/

int main(int argc, char* argv[]) {
	struct rectangle3D rect;
	struct point3D A, B;
	double h;
	FILE *in_fp, *out_fp;	
	
	if (argc != 3){
		printf("No input file or output file.");
		exit(1);
	}
	
	in_fp = fopen(argv[1], "r");
    if (!in_fp){
    	printf("Can't open %s\n", argv[1]);
		exit(2);
	}
	
    out_fp = fopen(argv[2], "w");
    if (!out_fp){
    	printf("Can't open %s\n", argv[2]);
		exit(3);
	}
	
	while (fscanf_s(in_fp, "%lf,%lf,%lf,%lf,%lf,%lf,%lf", &A.x, &A.y, &A.z, &B.x, &B.y, &B.z, &h) != EOF) {
		rect.a = A;
		rect.b = B;
		rect.height = h;
		
		fprintf(out_fp, "Surface Area: %lf\n", getSurfaceArea(rect));
		fprintf(out_fp, "Volume: %lf\n", getVolume(rect));
	}
	
	if (fclose(fp) != 0)
		printf("Error in closing file %s\n", argv[1]);
	if (fclose(fp2) != 0)
		printf("Error in closing file %s\n", argv[2]);
	
	return 0;
}
