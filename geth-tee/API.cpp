//
// Created by xusheng on 4/9/18.
//
#include "API.h"
#include "server.hpp"

using namespace thw;

PhxServer createPhxGrp(uint64_t startBlock, uint64_t TermLen){
    //Hardcoded
    PhxServer s;
    s.RunPaxos();
    return s;
}
int consensus(const char* input){
    return 1;

} //0 for non-leader, 1 for leader
int destroyPhxGrp(){
    return 1;
};