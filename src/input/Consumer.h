//
// Created by tharsanan on 4/5/19.
//

#ifndef STREAM_PROCESSOR_CONSUMER_H
#define STREAM_PROCESSOR_CONSUMER_H

#include "buffer/BufferGenericQueue.cpp"


class Consumer{
private:
    BufferGenericQueue<int> * buffer_;
public:
    Consumer(BufferGenericQueue<int> * buffer);
    void run();
};

#endif //STREAM_PROCESSOR_CONSUMER_H
