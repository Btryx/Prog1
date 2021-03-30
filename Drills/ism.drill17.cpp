#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a){

	for(int i=0; i < 10; i++)
		cout << a[i] << " ";
	cout<< endl;
}

void print_array(ostream& os, int* a, int n){

	for(int i=0; i < n; i++)
		cout << a[i] << " ";
	cout<< endl;
}

void print_vector(ostream& os, vector<int> v){

	for(int i= 0; i< v.size(); i++)
		cout << v[i] << " ";
	cout<< endl;
}



int main()
{
	cout << "Arrays: " << endl;

	int c = 100;
	int c2 = 100;
	int c3 = 100;
	int c4 = 100;

	int* ten = new int[10] {1,2,3,4,5,6,7,8,9,10};


	for (int i = 0; i < 10; ++i)
		cout << ten[i] << " ";
	cout << endl;

	print_array10(cout, ten);

	

	int* eleven = new int[11];
	for (int i = 0; i < 11; ++i)
	{
		eleven[i] = c2;
		c2++;
	}

	print_array(cout, eleven, 11);

	int* twenty = new int[20];
	for (int i = 0; i < 20; ++i)
	{
		twenty[i] = c3;
		c3++;
	}
	
	print_array(cout, twenty, 20);
	

	delete[] ten;
	delete[] eleven;
	delete[] twenty;

	cout << "Vectors: " << endl;


	vector<int> v1(10);
	for(int i= 0; i< v1.size(); ++i)
	{
		v1[i] = c4;
		c4++;
	}

	print_vector(cout, v1);

	return 0;
}