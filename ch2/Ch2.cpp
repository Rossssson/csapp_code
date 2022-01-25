//
// Created by rossssson on 2022/1/25.
//

#include <cstring>
#include "show_bytes.h"

class ch2_1
{
public:
    void func2_7()
    {
        const char *s="abcdefg";
        show_bytes showBytes;
        showBytes.show((byte_pointer)s,strlen(s));
    }
};
