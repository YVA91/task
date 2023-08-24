#include <iostream>
#include "counter.h"

    Counter::Counter() {
        this->count = 1;
    }
    Counter::Counter(int count) {
        this->count = count;
    }

    void Counter::ņountPlus() {
        this->count++;
    }

    void Counter::ņountMinus() {
        this->count--;
    }

    void Counter::printCount() {
        std::cout << this->count << std::endl;
    }

