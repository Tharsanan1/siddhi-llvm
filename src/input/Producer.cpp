//
// Created by tharsanan on 4/5/19.
//

#include "Producer.h"

Producer::Producer(BufferGenericQueue<int>* buffer){
    buffer_ = buffer;
}


void Producer::run() {
    for (int i = 0; i < 1000; ++i) {
        buffer_->push(i);
    }
}