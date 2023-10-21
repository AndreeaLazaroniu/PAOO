#include <iostream>
#include <cstring>
#include "lab.hpp"

lab::lab(int a, int b, char *c){
    this->a=a;
    this->b=b;
    this->c=c;
    std::cout << "I was created\n";
}

lab::lab(const lab& lb){
    this->a=lb.a;
    this->b=lb.b;
    int n = strlen(lb.c);
    this->c = new char[n];
    memcpy(this->c, lb.c, n);
    std::cout << "I was copied!\n";
}

lab::~lab(){
    delete [] this->c;
    std::cout <<"Goodbye\n";
}