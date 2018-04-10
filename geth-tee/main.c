//
// Created by xusheng on 4/10/18.
//
#include "API.h"
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char ** argv){
    if (argc != 2){
        printf("Usage: thw [offset]");
    }
    int offset = atoi(argv[1]);
    printf("Creating Node: %d", offset);

    PhxServer *s = createPhxGrp(0, 0, offset);
    if (s == NULL){
        printf("Error creating server");
    }

    size_t len = 1024;
    char *buffer = (char *)malloc(len * sizeof(char));

    while(1){
        int chars = getline(&buffer, &len, stdin);
        consensus(s, buffer, chars);
    }

}