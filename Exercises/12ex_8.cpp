#include "Simple_window.h"
#include "Graph.h"

#include <string>
#include <iostream>
#include<vector>


    using namespace Graph_lib;

int main()
try{

//8. feladat

Point tl (100,100);


Simple_window new_win (tl, 600, 400, "Ch12_labor2");

	Rectangle r{Point{10,15},650,325};
	r.set_fill_color(Color::white);
	new_win.attach(r);
	

	Circle c1{Point{250,95}, 50};
	c1.set_fill_color(Color::blue);

	Circle c2{Point{250,95}, 40};
	c2.set_fill_color(Color::white);
	Circle c3{Point{360,95}, 50};
	c3.set_fill_color(Color::black);

	Circle c4{Point{360,95}, 40};
	c4.set_fill_color(Color::white);

	Circle c5{Point{470,95}, 50};
	c5.set_fill_color(Color::red);

	Circle c6{Point{470,95}, 40};
	c6.set_fill_color(Color::white);

	Circle c7{Point{305,145}, 50};
	c7.set_fill_color(Color::yellow);

	Circle c8{Point{305,145}, 40};
	c8.set_fill_color(Color::white);

	Circle c9{Point{415,145}, 50};
	c9.set_fill_color(Color::green);

	Circle c10{Point{415,145}, 40};
	c10.set_fill_color(Color::white);

	new_win.attach(c1);
	new_win.attach(c2);
	new_win.attach(c3);
	new_win.attach(c4);
	new_win.attach(c5);
	new_win.attach(c6);
	new_win.attach(c7);
	new_win.attach(c8);
	new_win.attach(c9);
	new_win.attach(c10);
	new_win.wait_for_button();




}

catch(exception&e){
	cerr<< "exception" << e.what() << '\n';
	return 1;
}
catch(...){
	cerr << "error";
	return 2;
}
