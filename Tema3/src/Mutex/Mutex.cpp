#include "Mutex.hpp"

Mutex::Mutex(std::mutex& mutexParam) : mutex(mutexParam) {
    mutex.lock();
}

Mutex::~Mutex(){
    mutex.unlock();
}