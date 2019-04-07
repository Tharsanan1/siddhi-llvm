//
// Created by tharsanan on 4/5/19.
//

#ifndef STREAM_PROCESSOR_PRODUCER_H
#define STREAM_PROCESSOR_PRODUCER_H


#include <buffer/BufferGenericQueue.h>

class Producer{
private:
    BufferGenericQueue<int>* buffer_;
public:
    Producer(BufferGenericQueue<int>* buffer);
    void run();

};



#endif //STREAM_PROCESSOR_PRODUCER_H
