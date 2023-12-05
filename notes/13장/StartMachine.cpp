#include"StartMachine.h"
#include"Coffee.h"
#include"Sugar.h"
#include"Cream.h"
#include"Water.h"
#include"cup.h"
#include<iostream>
#include<iomanip>
using namespace std;


StartMachine::StartMachine() { // �����ڿ��� �ȳ� ��Ʈ�� ��� ���� ��� 
    cout << "-----��ǰ Ŀ�� ���Ǳ� �մϴ�.-----" << endl;
    mat[0] = new Coffee();
    mat[1] = new Sugar();
    mat[2] = new Cream();
    mat[3] = new Water();
    mat[4] = new Cup();
    show();
    cout << endl;
}
void StartMachine::show() { // ��� ���� ��� 
    for (int i = 0; i < 5; i++) {
        cout << setw(10) << mat[i]->getName();
        for (int j = 0; j < mat[i]->getAmount(); j++)
            cout << "*";
        cout << endl;
    }
}
void StartMachine::start() {
    int num;
    while (true) {
        Menu();
        num = selectMenu();
        if (num == 3) { // ä��� 
            for (int i = 0; i < 5; i++) {
                mat[i]->setAmount(3);
            }
            cout << "��� ���� ä��ϴ�~~" << endl;
            show();
            cout << endl;
            continue;
        }
        else if (num == 4) { // ���� 
            cout << "���α׷��� �����մϴ�..." << endl;
            exit(0);
        }

        if (mat[0]->subAmount(1) == false) { // coffee-1
            cout << "��ᰡ �����մϴ�." << endl;
            show();
            continue;
        }
        if (mat[3]->subAmount(1) == false) { // water-1
            cout << "��ᰡ �����մϴ�." << endl;
            show();
            continue;
        }
        if (mat[4]->subAmount(1) == false) { // cup-1
            cout << "��ᰡ �����մϴ�." << endl;
            show();
            continue;
        }
        // �⺻ ��ᰡ �������� ������ ���� 
        switch (num) {
        case 0: // ���� Ŀ�Ǵ� cream �߰� �Ҹ� 
            if (mat[2]->subAmount(1) == false) { // cream-1
                cout << "��ᰡ �����մϴ�." << endl;
                show();
                continue;
            }
            cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
            show();
            cout << endl;
            break;
        case 1: // ���� Ŀ�Ǵ� sugar �߰� �Ҹ� 
            if (mat[1]->subAmount(1) == false) { // sugar-1
                cout << "��ᰡ �����մϴ�." << endl;
                show();
                continue;
            }
            cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
            show();
            cout << endl;
            break;
        case 2: // �� Ŀ�Ǵ� �߰� �Ҹ� ���� 
            cout << "���ִ� �� Ŀ�� ���Խ��ϴ�~~" << endl;
            show();
            break;
        default: // �߸� �Է�
            cout << "�߸� �Է� �ϼ̽��ϴ�." << endl << endl;
            break;
        }
    }
}
    void StartMachine::Menu(){
        cout << "���� Ŀ��:0, ���� Ŀ��:1, �� Ŀ��:2, ä���:3, ����:4>> ";
    }
    int StartMachine::selectMenu() {
        int num;
        cin >> num;
        return num;
    }
