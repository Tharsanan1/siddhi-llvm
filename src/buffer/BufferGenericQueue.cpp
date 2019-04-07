//
// Created by tharsanan on 4/4/19.
//
#include "BufferGenericQueue.h"



template <class T>
T BufferGenericQueue<T>::back(){
    if (bufferQueue.empty()) {
        throw out_of_range("Queue<>::back(): empty Queue");
    }
    // return copy of last element
    return bufferQueue.back();
}

template <class T>
T BufferGenericQueue<T>::pop(){
    mutexForPopPushLock.lock();
    while(bufferQueue.empty()){
        m_condVar.wait(mutexForPopPushLock);
    }

    T value = bufferQueue.back();
    bufferQueue.pop();
    cout << value;
    mutexForPopPushLock.unlock();
    return value;
}

template <class T>
void BufferGenericQueue<T>::push(T const& value){
    mutexForPopPushLock.lock();
    bufferQueue.push(value);
    cout << value;
    mutexForPopPushLock.unlock();
    m_condVar.notify_all();
}