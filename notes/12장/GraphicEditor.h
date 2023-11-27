#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H
#include<vector>
#include "Shape.h"
using namespace std;

class GraphicEditor {
    vector<Shape*> v;
    vector<Shape*>::iterator it;
public:
    GraphicEditor() { cout << "�׷��� �������Դϴ�.\n"; };
    void insertItem(int type);
    void deleteItem(int index);
    void show(vector<Shape*> &v, vector<Shape*>::iterator &it);
    void run();
};
#endif