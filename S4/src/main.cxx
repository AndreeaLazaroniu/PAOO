# include <cstring>
# include "lib/lab.hpp"
# include <iostream>

# define MAX_LEN 5

int main() {
    char * s = new char[MAX_LEN];
    memcpy(s, "Sal", MAX_LEN);
    lab c1(1, 2.0, s);
    {
        lab y = c1;
    }
  return 0;
}