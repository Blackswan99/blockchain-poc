include "block.h"
include "sha256.h"

std::string Blockchain::calculateHash(index, previousHash, timestamp, data) {
    std::string common = std::to_string(index) + std::sName(&previousHash) + timestamp + data;
    return SHA256::sha256(common);
};

int main() {
   cout << "Hello Blockchain";
   return 0;
}
