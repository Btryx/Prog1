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


Simple_window win (tl, 600, 400, "Ch12_labor2");

//9. feladat
	Image ii(Point{20,30}, "badge.jpg");
	win.attach(ii);
	win.set_label("image");
	

	Text im {Point{19,30}, "image"};
	im.set_font(Font::courier);
	im.set_font_size(40);
	win.attach(im);
	win.wait_for_button();


}

catch(exception&e){
	cerr<< "exception" << e.what() << '\n';
	return 1;
}
catch(...){
	cerr << "error";
	return 2;
}