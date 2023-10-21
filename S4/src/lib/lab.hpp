#pragma once

class lab{
    private:
        int a;
        float b;
        char *c;
    public:
        lab(int, int, char *);
        lab(const lab&);
        ~lab();
};