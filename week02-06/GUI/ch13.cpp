#include "Simple_window.h"
#include "Graph.h"



int main()
try{

using namespace Graph_lib;

Simple_window win(Point(),1000,800, "window");

//2
constexpr int xmax= 800;
constexpr int ymax = 800;

int xgrid= 100;
int ygrid= 100;


Lines grid;
for(int x=ygrid; x<xmax; x+=ygrid){
	grid.add(Point{x,0}, Point{x, ymax});
}
for(int y=xgrid; y<ymax; y+=xgrid){
	grid.add(Point{0,y}, Point{xmax,y});
}
win.attach(grid);
win.wait_for_button();


//3

Vector_ref <Rectangle> vr;
	for(int i=0;i<8;i++){
		vr.push_back(new Rectangle(Point(i*100,i*100),100,100));
		vr[vr.size()-1].set_fill_color(Color::red);
		win.attach(vr[vr.size()-1]);
		win.set_label("red");	
	}
	win.wait_for_button();
//4


Image dog{Point{300,0}, "kutya.jpeg"};
Image dog2{Point{100,400}, "kutya.jpeg"};
Image dog3{Point{300,600}, "kutya.jpeg"};
Image dog4{Point{600,200}, "kutya.jpeg"};
win.set_label("dogs are cute");
win.attach(dog);
win.attach(dog2);
win.attach(dog3);
win.attach(dog4);
win.wait_for_button();

//5


Image cat{Point(), "cat.jpeg"};
cat.set_mask(Point(), 100, 100);
win.attach(cat);
win.set_label("cat");
for(int i=0; i<8; ++i)
	for(int j=0; j<8; ++j)
	{	
	
		
		win.wait_for_button();
		(j<7) ? cat.move(0,100) : cat.move(100,-700);
	
	
	}
	



}
catch(exception&e){
	cerr<< "exception" << e.what() << '\n';
	return 1;
}
catch(...){
	cerr << "error";
	return 2;
}