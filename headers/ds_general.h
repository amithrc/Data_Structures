//
// Created by amith on 12/16/19.
//

#ifndef DATA_STRUCTURES_DS_GENERAL_H
#define DATA_STRUCTURES_DS_GENERAL_H

#include<stdio.h>
#include<stdlib.h>

typedef enum
{
    FALSE,
    TRUE
} BOOLEAN;

#define ERROR(msg) \
                printf("%s",msg); \
                exit(-1);


#define DEALLOC(ptr) if(ptr != NULL) \
                      free(ptr);

#define DEALLOC_2D(ptr,row) \
                for(int i=0;i<row;i++) \
                { \
                    VERIFY(*(ptr+i)) \
                    DEALLOC(*(ptr+i)) \
                } \
                free(ptr)


#define ALLOC(ptr,type,size) \
                      ptr = (type *) malloc (size * sizeof(type)); \
                      INVALID_POINTER(ptr)  \
                      { \
                        ERROR("Error Allocating memory!!"); \
                      }

#define CALLOC(ptr,type,size) \
                      ptr = (type *) calloc (size, sizeof(type)); \
                      INVALID_POINTER(ptr)  \
                      { \
                        ERROR("Error Allocating memory!!"); \
                      }


#define VERIFY(ptr) \
               if( ptr == NULL) \
                 exit(-1);

#define ARRAY_SIZE(_arr) sizeof(_arr)/sizeof(_arr[0])

#define VALID_POINTER(ptr) \
                      if(ptr != NULL) \

#define INVALID_POINTER(ptr) \
                      if(ptr == NULL) \


#endif //DATA_STRUCTURES_DS_GENERAL_H
