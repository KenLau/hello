#include "hello.h"
extern "C" {
    #include "c_hello.h"
}

int main (void) {
    hello();
    c_hello();
}
