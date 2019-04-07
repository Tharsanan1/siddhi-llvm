//
// Created by tharsanan on 4/4/19.
//

#ifndef STREAM_PROCESSOR_BUFFERGENERICQUEUE_H
#define STREAM_PROCESSOR_BUFFERGENERICQUEUE_H

#include <queue>
#include <cstdlib>
#include <stdexcept>
#include <mutex>
#include <condition_variable>
#include "iostream"

using namespace std;

template <class T>
class BufferGenericQueue {
private:
    condition_variable m_condVar;
    mutex mutexForPopPushLock;
    queue<T> bufferQueue;
public:
    //BufferGenericQueue();
    T back();
    T pop();
    void push(T const&);

};




#endif //STREAM_PROCESSOR_BUFFERGENERICQUEUE_H
