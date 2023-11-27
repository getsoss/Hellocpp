#ifndef SHAPE_H
#define SHAPE_H
#include<cstddef>
class Shape {
protected:
	virtual void draw() = 0;
public:
	void paint();
};
#endif