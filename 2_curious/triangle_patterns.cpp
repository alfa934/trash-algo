// triangles, triangles everywhere
#include <iostream>

int main() {
    int height, width;
    height = width = 5;
    // *
    // * *
    // * * *
    for(int i = 0; i < height; i ++) {
        for(int j = 0; j < width; j++) {
            if(j <= i) 
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
    // * * *
    //   * *
    //     *
    std::cout << std::endl;
    for(int i = 0; i < height; i ++) {
        for(int j = 0; j < width; j++) {
            if(j >= i) 
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for(int i = 0; i < height; i ++) {
        for(int j = 0; j < width; j++) {
            if(j >= i) 
                std::cout << i+1 << " ";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for(int i = 0; i < height; i ++) {
        for(int j = 0; j < width; j++) {
            if(j >= height - i - 1) 
                std::cout << "* ";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
