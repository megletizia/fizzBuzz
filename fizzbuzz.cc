#include <iostream>

int main() {
    for(int i=1; i<=100; i++){
        if(i%3==0){
            if(i%5==0){
            std::cout << "FizzBuzz" << std::endl;
            }else{
                std::cout << "Fizz" << std::endl;
                 }
        }
        if(i%5==0){
            std::cout << "Buzz" << std::endl;
        }
        std::cout << i << std::endl;
    }
    
    
}