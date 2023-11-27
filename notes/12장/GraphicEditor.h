#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H
#include<vector>
#include "Shape.h"
using namespace std;

class GraphicEditor {
    vector<Shape*> v;
    vector<Shape*>::iterator it;
public:
    GraphicEditor() { cout << "그래픽 에디터입니다.\n"; };
    void insertItem(int type);
    void deleteItem(int index);
    void show(vector<Shape*> &v, vector<Shape*>::iterator &it);
    void run();
};
#endif