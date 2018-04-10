//
// Created by xusheng on 4/9/18.
//

#ifndef THW_API_H
#define THW_API_H

#ifdef __cplusplus
extern "C" {
#endif
    void* createPhxGrp(uint64_t startBlock, uint64_t TermLen);
    int consensus(const char* input); //0 for non-leader, 1 for leader
    int destroyPhxGrp();
#ifdef __cplusplus
}
#endif



#endif //THW_API_H
