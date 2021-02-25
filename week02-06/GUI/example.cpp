#include "Simple_window.h"
#include "Graph.h"

int main()
try{
	using namespace Graph_lib;

	Point tl(200,50);
	Simple_window win(tl,1200,720,"Labor2");

	Arc arc1(Point(150,100), 100,50,45,175);
	win.attach(arc1);
	arc1.set_color(Color::red);
	arc1.set_angle(270);
	win.wait_for_button();


return 0;

} catch (exception& e){
	cerr<< "Exception: " << e.what() << endl;
	keep_window_open();
} catch (...){
	cerr << "Exception\n";
	keep_window_open();
}