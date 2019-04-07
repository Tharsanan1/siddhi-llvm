//
// Created by tharsanan on 4/5/19.
//

#include "Consumer.h"


Consumer::Consumer(BufferGenericQueue<int> * buffer){
    buffer_ = buffer;
}

void Consumer::run() {
    for (int i = 0; i < 1000; ++i) {
        buffer_->pop();
    }
}