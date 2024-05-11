#include <string>  // Include the correct header for std::string

struct blocksStruct {
    char** blocks;
    int count = 0;
};

class AES {
public:
    static std::string encrypt(std::string data, std::string key, int bits);
private:
    static blocksStruct divideBlocks(std::string data);
};