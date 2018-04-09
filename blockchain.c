#include "blockchain.h"

Block::Block(unsigned int index, unsigned char[] previousHash, time_t timestamp, Data data, unsigned char[] hash) {
    this.index = index;
    this.previousHash = previousHash;
    this.timestamp = timestamp;
    this.data = data;
    this.hash = hash;
}
