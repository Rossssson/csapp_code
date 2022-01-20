//
// Created by rossssson on 2022/1/20.
//
#include <cstdio>
#include "show_bytes.h"

void show_bytes::show(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; ++i) {
        printf("%.2x",start[i]);
    }
    printf("\n");
}

void show_bytes::show_int(int x) {
    show((byte_pointer)&x,sizeof (int ));
}

void show_bytes::show_float(float x) {
    show((byte_pointer)&x,sizeof (float ));
}

void show_bytes::show_pointer(void *x) {
    show((byte_pointer)&x,sizeof (void *));
}

void show_bytes::test_show(int x) {
    int ival=x;
    float fval=(float )x;
    int* pval=&x;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}
