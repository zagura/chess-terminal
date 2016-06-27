#include <iostream>
#include "commons.h"
#include "Board.h"

using namespace std;
using namespace chess;

int main() {
    cout << "Hello, World!" << endl;
    Board b = Board(true);
    cout << b;
    return 0;
}