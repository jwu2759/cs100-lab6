#include "../header/rectangle.hpp"

Rectangle::Rectangle(int w, int h){
	width = w;
	height = h;
	if(width < 0)
		width = width * -1;
	if(height < 0)
		height = height * -1;
}

int Rectangle::perimeter(){
	return (this->width + this->height) * 2;
}

void Rectangle::set_width(int w){
	this->width = w;
	if(width < 0)
		width = width * -1;
}

void Rectangle::set_height(int h){
	this->height = h;
	if(height < 0)
		height = height * -1;
}
int Rectangle::area(){
	return this->width * this->height;
}


