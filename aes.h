#include <string>  // Include the correct header for std::string

struct Block {
    unsigned char data[16];
};

struct Blocks {
    Block* blocks;
    int count = 0;
};

class AES {
public:
    static std::string encrypt(std::string data, std::string key, int bits);
private:
    static Block addRoundKey(Block block, const unsigned char roundKey[16]);
    static Block mixColumns(Block block);
    static Block subBytes(Block block);
    static unsigned char gmul(unsigned char a, unsigned char b);
    static Blocks divideBlocks(const std::string& data);
    static Block shiftRows(Block block);
};