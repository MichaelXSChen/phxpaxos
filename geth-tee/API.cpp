//
// Created by xusheng on 4/9/18.
//
#include "API.h"
#include "server.hpp"

void* createPhxGrp(uint64_t startBlock, uint64_t TermLen){
    //Hardcoded
    Server s();
    s.runPaxos();
    return (void *)s;
}
int consensus(const char* input){

} //0 for non-leader, 1 for leader
int destroyPhxGrp();