#ifndef DEVCHAIN_BLOCK_H
#define DEVCHAIN_BLOCK_H

#include <cstdint>
#include <iostream>
#include <sstream>

using namespace std;

class Block {

public:
    string hash;
    string prevHash;
    Block(uint32_t indexIn, const string &dataIn);
    void MineBlock(uint32_t difficulty);

private:
    uint32_t index;
    uint32_t nonce;
    string data;
    time_t timestamp;
    string CalculateHash() const;
    
};

#endif