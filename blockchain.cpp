include "block.h"
include "sha256.h"
include <time.h>

std::string Blockchain::calculateHash(index, previousHash, timestamp, data) {
    std::string common = std::to_string(index) + std::sName(&previousHash) + ctime(&timestamp) + data;
    return SHA256::sha256(common);
};

Block* Blockchain::generateNextBlock(){
    /* JS code to be converted
    var previousBlock = getLatestBlock();
    var nextIndex = previousBlock.index + 1;
    var nextTimestamp = new Date().getTime() / 1000;
    var nextHash = calculateHash(nextIndex, previousBlock.hash, nextTimestamp, blockData);
    */
    return new Block(nextIndex, previousBlock.hash, nextTimestamp, blockData, nextHash); 
};

int main() {
   cout << "Hello Blockchain";
   return 0;
}
