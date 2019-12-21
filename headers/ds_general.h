//
// Created by amith on 12/16/19.
//

#ifndef DATA_STRUCTURES_DS_GENERAL_H
#define DATA_STRUCTURES_DS_GENERAL_H

#include<stdio.h>
#include<stdlib.h>
#include "ds_array.h"


#define ERROR(msg) \
                printf("%s",msg); \
                exit(-1);


#define DEALLOC(ptr) if(ptr != NULL); \
                      free(ptr);

#define ALLOC(ptr,type,size) \
                      ptr = (type *) malloc(size * sizeof(type)); \
                      if (!ptr) \
                      { \
                        ERROR("Error Allocating memory!!"); \
                      }

#endif //DATA_STRUCTURES_DS_GENERAL_H
