//
// Created by rossssson on 2022/1/20.
//

#ifndef CSAPP_SHOW_BYTES_H
#define CSAPP_SHOW_BYTES_H

#include <cstdlib>

typedef unsigned char *byte_pointer;

class show_bytes {
public:
    void show(byte_pointer start,size_t len);
    void show_int(int x);
    void show_float(float x);
    void show_pointer(void* x);

};


#endif //CSAPP_SHOW_BYTES_H
