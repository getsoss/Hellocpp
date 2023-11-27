#include<iostream>
#include<vector>
#include "GraphicEditor.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include "UI.h"

using namespace std;

void GraphicEditor::insertItem(int type) {
    switch (type) {
    case 1:
        v.push_back(new Line());
        break;
    case 2:
        v.push_back(new Circle());
        break;
    case 3:
        v.push_back(new Rect());
        break;
    default:
        break;
    }
}
void GraphicEditor::deleteItem(int index) {
    if (index >= v.size() || index < 0)
        cout << "없는 인덱스 입니다.\n";
    it = v.begin();
    Shape* tmp = *(it + index);
    v.erase(it + index);
    delete tmp;
}
void GraphicEditor::show(vector<Shape*> &v, vector<Shape*>::iterator &it) {
    int i = 0;
    for (it = v.begin(); it != v.end(); it++, i++) {
        cout << i << ": ";
        v.at(i)->paint();
    }
}
void GraphicEditor::run() {
    int menu, index, type;
    while (true) {
        menu = UI::getMenu();
        switch (menu) {
        case 1:
            type = UI::getShapeTypeToInsert();
            insertItem(type);
            break;
        case 2:
            index = UI::getShapeIndexToDelete();
            deleteItem(index);
            break;
        case 3:
            show(v,it);
            break;
        default:
            return;
        }
    }
}