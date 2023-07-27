#include <string>

class Player {
public:
    virtual char makeMove() = 0;
    virtual std::string getName() = 0;
};
