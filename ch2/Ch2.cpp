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
    /*use xor to swap*/
    void swapByXOR(int *a,int *b) {
        *b = *a ^ *b;
        *a = *a ^ *b;
        *b = *a ^ *b;
    }
    void func2_11(int a[],int cnt){
        int first,last;
        for ( first = 0,last=cnt-1; first <=last/*first<last*/ ; first++,last--) {
            swapByXOR(&a[first],&a[last]);
        }
        //in func2_11, when cnt=2k+1,a[k] will be set to 0 as a[k]^a[k]=0,replace first<=last with first<last to solve
    }
    void func2_13(int x,int y)
    {
        //bis and bic are instructions used in VAX computer to replace boolean instructions. Both instructions take a data
        //word x and a mask word m, generating a result z. With bis, x is modified by setting z to 1 at each bit position
        //where m=1, with bic, z is set to 0 where m=0.
        //use bis(int x,int y) and bic(int x,int y) to implement x|y and x^y

        /*Clearly, bis(x,y) refers to x|y and bic(x,y) refers to x&y*/
        /*So, x|y can be implemented by bis(x,y), and x^y can be implemented by bic(bis(x,y),bic(x,y))*/

    }
    bool ifEqual(int x,int y)
    {
        return !(x^y);
    }
};
