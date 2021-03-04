#include "../std_lib_facilities.h"

double real(int x, int imageWidth, double minR, double maxR)
{
	double range = maxR - minR;

	return x * (range / imageWidth) + minR;
}

double imaginary(int y, int imageHeight, double minI, double maxI)
{
	double range = maxI - minI;

	return y * (range / imageHeight) + minI;
}

int findN(double cr, double ci, int max_iterations)
{
	int i = 0;
	double zr = 0.0, zi = 0.0;
	while (i < max_iterations && zr * zr + zi * zi < 4.0)
	{
		double temp = zr * zr - zi * zi + cr;
		zi = 2.0 * zr * zi +ci,
		zr = temp;
		i++;
	}

	return i;
}

int main()
{

 	ifstream ist("input.txt");
 	int imageWidth, imageHeight, maxN;
 	double minR, maxR, minI, maxI;

 	if(!ist) error ("Can't open input file");

 	ist >> imageWidth >> imageHeight >> maxN;
 	ist >> minR >> maxR >> minI >> maxI;
 	ist.close();

 	ofstream ost("output.ppm", std::ios::binary);
 	ost << "P3" << endl;
 	ost << imageWidth << " " << imageHeight << endl;
 	ost << "255" << endl;

 	for (int y = 0; y< imageHeight; y++)
 	{
 		for(int x = 0; x < imageWidth; x++)
 		{
 			double cr = real(x, imageWidth, minR, maxR);
 			double ci = imaginary(y, imageHeight, minI, maxI);

 			int n = findN(cr, ci, maxN);

 			int r = (n % 255);
 			int g = (n % 255);
 			int b = (n % 255);

 			ost << r << " " << g << " " << b << " ";
 		}

 		ost << endl;
 	}
 	ost.close();



	return 0;
}