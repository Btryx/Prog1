#include "Simple_window.h"
#include "Graph.h"

#include <string>
#include <iostream>
#include<vector>


    using namespace Graph_lib;

int main()
try{
    
   Point tl (100,100);
   Simple_window win (tl, 600, 400, "Ch12_labor");
   
	//01
	Rectangle r{Point{50,50},50,25};
	r.set_color(Color::blue);
	win.attach(r);

	Polygon rect;
	rect.add(Point{125, 50});
	rect.add(Point{175, 50});
	rect.add(Point{175, 75});
	rect.add(Point{125, 75});
	rect.set_color(Color::red);
	win.attach(rect);

	win.set_label("1. feladat");
	win.wait_for_button();

	//2
	Rectangle rt{Point{200,50}, 100,30};
	win.attach(rt);

	Text t{Point{205,75}, "Howdy"};
	t.set_font(Font::helvetica_bold);
	t.set_font_size(20);
	win.attach(t);

	win.set_label("2. feladat");
	win.wait_for_button();

	//03
	Text t01 {Point{90,350}, "O"};
	t01.set_font(Font::courier);
	t01.set_font_size(150);

	Text t2 {Point{350,150}, "B"};
	t2.set_font(Font::courier);
	t2.set_font_size(150);

	t01.set_color(Color::green);
	t2.set_color(Color::yellow);
	win.attach(t01);
	win.attach(t2);

	win.set_label("3. feladat");

	win.wait_for_button();

	//4
	Vector_ref<Rectangle> vr;
	int w = 50;
	for(int row =0; row < 3; ++row) {
		for (int col= 0; col <3; ++col) {
		vr.push_back(new Rectangle{Point{350+ w*col, 200+w*row}, w, w});
		
		int i =vr.size()-1;
		i % 2 ==0
			? vr[i].set_fill_color(Color::red)
			: vr[i].set_fill_color(Color::white);
			
		win.attach(vr[i]);
		}

	}
	win.set_label("4. feladat");
	win.wait_for_button();

	//5
	int xx= 600;
	int yy= 400;
	Rectangle rr {Point{15,15}, xx * 3/4, yy * 2/3};
	rr.set_style(Line_style(Line_style::solid, 8));
	rr.set_color(Color::green);

	win.attach(rr);
	win.set_label("5. feladat");
	win.wait_for_button();

	//6
	Rectangle big{Point{100,100},1000,1000};
	big.set_style(Line_style(Line_style::solid, 8));
	big.set_color(Color::red);
	win.attach(big);
	win.set_label("6. feladat");
	win.wait_for_button();


	//7

	//teto
	Polygon roof;

	roof.add(Point{300,200});
	roof.add(Point{250,150});
	roof.add(Point{200,200});
	win.attach(roof);

	//fal
	Rectangle wall{Point{200,200}, 100,50};
	win.attach(wall);

	//windows
	Rectangle window1{Point{210,210}, 20, 20};
	win.attach(window1);
	Rectangle window2{Point{270,210}, 20, 20};
	win.attach(window2);
	//door
	Rectangle door{Point{240,220}, 20, 30};
	win.attach(door);
	win.set_label("7. feladat");
	win.wait_for_button();


	


 Simple_window big_win (tl, 2600, 1400, "6. feladat");
 big_win.wait_for_button();

}

catch(exception&e){
	cerr<< "exception" << e.what() << '\n';
	return 1;
}
catch(...){
	cerr << "error";
	return 2;
}
