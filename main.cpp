#include <iostream>

extern "C"{
#include "libavformat/avformat.h"
#include "libavcodec/avcodec.h"
}

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    cout << avcodec_configuration() << endl;

    return 0;
}