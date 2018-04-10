include "block.h"
include "sha256.h"
include <time.h>

using namespace std;

string Blockchain::calculateHash(index, previousHash, timestamp, data) {
    string common = to_string(index) + sName(&previousHash) + ctime(&timestamp) + data;
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
