

using namespace Graph_lib
{

 //Graphics classes

//Point

struct Point{
	int x, y;
	Point(int xx,int yy) : x(xx), y(yy){}
};



//Line

struct Line : Shape {
	Line(Point p1, Point p2);
};


Line::Line(Pointp1,Point p2)
{
	add(p1);
	add(p2);
}


//Lines

struct Lines:Shape{
	void add(Point p1, Point p2);
	void draw_lines()const;
};





//Simple_window win1{Point{100,100}, 600, 400, "Line"};

// Line horizontal {Point{100,100}, Point{200,100}};
// Line vertical {Point{150,50}, Point{150,150}};

// win1.attach(horizontal);
// win1.attach(vertical);
// win1.wait_for_button();











}
