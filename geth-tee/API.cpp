//
// Created by xusheng on 4/9/18.
//
#include "API.h"
#include "server.hpp"

using namespace std;

PhxServer* createPhxGrp(uint64_t startBlock, uint64_t TermLen, int offset){
    //Hardcoded
    PhxServer *s = new PhxServer(offset);
    s->RunPaxos();
    return s;
}

int consensus(PhxServer *s, const char *input, size_t len){
    string sPhxReqValue = string(input);
    string sPhxRespValue;
    int ret = s->Echo(sPhxReqValue, sPhxRespValue);
    if (ret != 0)
    {
        printf("Echo fail, ret %d\n", ret);
        return ret;
    }
    else
    {
        printf("echo resp value %s\n", sPhxRespValue.c_str());
        return 0;
    }

} //0 for non-leader, 1 for leader
int destroyPhxGrp(){
    return 1;
};