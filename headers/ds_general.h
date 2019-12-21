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

#define DEALLOC_2D(ptr,row) \
                for(int i=0;i<row;i++) \
                    DEALLOC(*(ptr+i))



#define ALLOC(ptr,type,size) \
                      ptr = (type *) malloc(size * sizeof(type)); \
                      if (!ptr) \
                      { \
                        ERROR("Error Allocating memory!!"); \
                      }
#define VERIFY(ptr) \
               if( ptr == NULL) \
                 exit(-1);

#define ARRAY_SIZE(_arr) sizeof(_arr)/sizeof(_arr[0]);



#endif //DATA_STRUCTURES_DS_GENERAL_H
