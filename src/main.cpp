#include "pipeline/pipeline.hpp"
#include <iostream>

int main() {
    Pipeline p;
    for(int i=0;i<10;i++) p.step();
    std::cout << "Finished simulation.\n";
}
