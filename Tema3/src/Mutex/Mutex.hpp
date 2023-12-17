#pragma once

#include <mutex>

class Mutex {
    public:
        Mutex(std::mutex& mutexParam);
        ~Mutex();
    private:
        std::mutex& mutex;
};