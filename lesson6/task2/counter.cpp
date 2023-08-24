#include <iostream>
#include "counter.h"

    Counter::Counter() {
        this->count = 1;
    }
    Counter::Counter(int count) {
        this->count = count;
    }

    void Counter::ñountPlus() {
        this->count++;
    }

    void Counter::ñountMinus() {
        this->count--;
    }

    void Counter::printCount() {
        std::cout << this->count << std::endl;
    }

