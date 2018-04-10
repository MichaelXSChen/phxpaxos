//
// Created by xusheng on 4/9/18.
//

#ifndef THW_API_H
#define THW_API_H

#ifdef __cplusplus
#define EXPORT_C extern "C"
#else
#define EXPORT_C
#endif

#include "stdint.h"
#include "stdlib.h"
#ifdef __cplusplus
#include "server.hpp"
#else
typedef struct PhxServer PhxServer;
#endif



#ifdef __cplusplus
namespace thw {
#endif

EXPORT_C PhxServer *createPhxGrp(uint64_t startBlock, uint64_t TermLen, int offset);

EXPORT_C int consensus(PhxServer *s, const char *input, size_t len); //0 for non-leader, 1 for leader
EXPORT_C int destroyPhxGrp();

#ifdef __cplusplus
}
#endif
#endif //THW_API_H
