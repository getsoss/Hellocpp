#include <iostream>

using namespace std;

int main() {
   int x = 5;
   int *ptr = &x;

   cout << *ptr;

   return 0;
}