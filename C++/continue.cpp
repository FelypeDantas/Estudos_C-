#include <iostream> 

int main() {
    for(int t = 0; t < 11; t++) {
        if(t > 5 && t < 8) {
            continue; 
        }
        std::cout << t << " "; 
    }
    return 0;
}