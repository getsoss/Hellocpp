#include "Machine.h"
class StartMachine {
    Machine* mat[]; // Material의 객체 배열 포인터 생성 
public:
    StartMachine();
    void show();
    void start();
    void Menu();
    int selectMenu();
};