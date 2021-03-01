
#include "std_lib_facilities.h"






struct B1{

	virtual void vf() { cout << "B1::vf()\n";}
	void f() { cout << "B1::f()\n";}
	virtual void pvf() =0;

};

struct D1 : B1{

	void vf() override { cout << "D1::vf()\n";}
	void f() {cout << "D1::f()\n";}


};


struct D2 : D1{

void pvf() override { cout << "D2::pvf()\n"; }

};

struct B2 {
    virtual void pvf() =0;
};

struct D21 : B2 {
    string s = "myString";
    void pvf() override { cout << s << '\n'; }

};

struct D22 : B2 {
    int n = 2021;
    void pvf() override { cout << n << '\n'; }
};

void f(B2& b){b.pvf();}



int main()
{


// B1 obj1;                 cant make object of base class
// cout << "B1 obj1: \n";
// obj1.vf();
// obj1.f();


// D1 obj2;                  cant make object of base class
// cout << "D1 obj2: \n";
// obj2.vf();
// obj2.f();

// B1& ref {obj2};             obj2 not declared now
// cout << "B1& r {obj2}: \n";
// ref.vf();
// ref.f();

D2 obj3;
obj3.vf();  	//D1::vf()
obj3.f();		//D1::f()
obj3.pvf();     //D2::pvf()
cout<< '\n';

D21 obj4;
obj4.pvf();


D22 obj5;
obj5.pvf();
cout<< '\n';

cout<< "f() function: " <<endl;
f(obj4);
f(obj5);


				


}