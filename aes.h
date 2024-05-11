#include <string>  // Include the correct header for std::string

struct Block {
    char data[16];
};

struct Blocks {
    Block* blocks;
    int count = 0;
};

class AES {
public:
    static std::string encrypt(std::string data, std::string key, int bits);
    static Block subBytes();
private:
    static Blocks divideBlocks(std::string data);
};