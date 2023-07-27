#include "Computer.h"

Computer::Computer() {}

char Computer::makeMove() {
    return 'R'; // Always play Rock
}

std::string Computer::getName() {
    return "Computer";
}
