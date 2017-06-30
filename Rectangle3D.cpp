#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
CMD usage:
paste data file next to .exe
>>>FileIO.exe Book1.csv output.txt
*/


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
};



/********functions***********/

//calculate the surface area for 3d rectangle
double getSurfaceArea(struct rectangle3D* rect){
	double surfaceArea, l, w;
	double h = rect->height;
	
	double delX = fabs(rect->a.x - rect->b.x);
	double delY = fabs(rect->a.y - rect->b.y);
	double delZ = fabs(rect->a.z - rect->b.z);
	
	l = sqrt(pow(delX, 2) + pow(delZ, 2));
	w = sqrt(pow(delY, 2) + pow(delZ, 2));
	
	surfaceArea = 2*(l*w+l*h+w*h);
	return surfaceArea;
}

//calculate the volume for 3d rectangle
double getVolume(struct rectangle3D* rect){
	double volume, l, w;
	double h = rect->height;
	
	double delX = fabs(rect->a.x - rect->b.x);
	double delY = fabs(rect->a.y - rect->b.y);
	double delZ = fabs(rect->a.z - rect->b.z);
	
	l = sqrt(pow(delX, 2) + pow(delZ, 2));
	w = sqrt(pow(delY, 2) + pow(delZ, 2));
	
	volume = l*w*h;
	return volume;
}

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
	
	while (fscanf(in_fp, "%lf,%lf,%lf,%lf,%lf,%lf,%lf", &A.x, &A.y, &A.z, &B.x, &B.y, &B.z, &h) != EOF) {
		rect.a = A;
		rect.b = B;
		rect.height = h;
		
		fprintf(out_fp, "Surface Area: %lf\n", getSurfaceArea(&rect));
		fprintf(out_fp, "Volume: %lf\n", getVolume(&rect));
	}
	
	if (fclose(in_fp) != 0)
		printf("Error in closing file %s\n", argv[1]);
	if (fclose(out_fp) != 0)
		printf("Error in closing file %s\n", argv[2]);
	
	return 0;
}
