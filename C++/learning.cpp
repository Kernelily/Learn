/*
 * =====================================================================================
 *
 *       Filename:  learning.cpp
 *
 *    Description:  Let's learn about C++! 
 *
 *        Version:  1.0
 *        Created:  04/03/23 01:40:22
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  정재윤 (Kernel), 
 *   Organization:  YONSEI UNIVERSITY
 *
 * =====================================================================================
 */
#include <iostream>
// using namespace std; 
// means that we can use names for objects and variables from the sandard library.
const float PI = 3.142592;

int sumThem() {
    int x, y;

    std::cout << "Type two numbers: ";
    std::cin >> x >> y;

    std::cout << "Sum of them ==> " << x + y << std::endl;

    return 0;
}

int main() {
    std::cout << "Hello, world!" << std::endl; // endl equals to "\n"
                                               // cout = char output (see-out)
                                               // insertion operator (<<) to output text
    
    int myNum = 14;
    myNum = 7;

    std::cout << "I wanna be " << myNum << " years old." << std::endl;

    sumThem();

    return 0;
}
