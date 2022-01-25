#include <iostream>
#include "ch2/show_bytes.h"
#include "ch2/Ch2.cpp"

int main() {
    ch2_1 test;
    show_bytes showBytes;
    int a=123456;
    showBytes.test_show(a);//40e20100 0020f147 f8fd620000000000
    test.func2_7();//61626364656667
    return 0;
}
