#include <Arduino.h>
#include <cstdio>

void setup() {
#if MESSAGE == 1
    puts("first");
#elif MESSAGE == 2
    puts("second");
#else
    puts("second");
#endif
}

void loop() {
}
