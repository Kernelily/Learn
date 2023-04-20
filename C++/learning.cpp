/*
 * =====================================================================================
 *
 *       Filename:  learning.cpp
 *
 *    Description:  Let's learn about C++! 
 *
 *        Version:  1.0
 *        Created:  04/03/23 01:40:22
 *       Compiler:  g++
 *
 *         Author:  정재윤 (@__77.4_), 
 *   Organization:  YONSEI UNIVERSITY
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std; 
// using namespace ~; means that we can use names for objects and variables from the sandard library.

const float PI = 3.142592;
// this is constant so read-only, unchangeable

/*
 * Function Declare Region
 */
int testIO();
int sumThem();
int testString();
int testArrays();
int testStruct();

/*
 * Main Function Region
 */
int main() {
    string funcName;

    std::cout << "Enter funcName => ";
    std::cin >> funcName;

    if (funcName == "testIO") {
        testIO();
    } else if (funcName == "sumThem") {
        sumThem();
    } else if (funcName == "testString") {
        testString();
    } else if (funcName == "testArrays") {
        testArrays();
    } else if (funcName == "testStruct") {
        testStruct();
    } else {
        return main();
    }
}

/*
 * Actual Function Region
 */
int testIO() {
    std::cout << "Hello, world!" << std::endl; // endl equals to "\n"
                                               // cout = char output (see-out)
                                               // insertion operator (<<) to output text
    
    int myNum = 14;
    myNum = 7;

    std::cout << "I wanna be " << myNum << " years old." << std::endl;

    return 0;
}

int sumThem() {
    int x, y;

    std::cout << "Type two numbers: ";
    std::cin >> x >> y;

    std::cout << "Sum of them ==> " << x + y << std::endl;

    return 0;
}

int testString() {
    string testStr = "Hahaha...";

    // length() == size()
    std::cout << "The length of \"testStr\" is: " << testStr.length() << std::endl;
    std::cout << "The first letter of \"testStr\" is: " << testStr[0] << std::endl;

    // Let me change two letters
    testStr[0] = 'F';
    testStr[1] = 'u';

    // Let's print it out!
    std::cout << "The changed one is: " << testStr << std::endl;

    return 0;
}

int testFor() {
    for (int i = 0; i <= 10; i += 2) {
        std::cout << "Current Number: " << i << std::endl;

        for (int k = 0; k <= 3; ++k) {
            std::cout << "Inner Number \'k\': " << k << std::endl;
        }
    }

    int tNums[5] = {10, 20, 30, 40, 50};

    for (int l : tNums) {
        std::cout << "Current Number: " << l << std::endl;
    }

    return 0;
}

int testArrays() {
    string myCars[3] = {"F8 Spider", "Ghost", "Chiron"};
    std::cout << "My current car is: " << myCars[0] << std::endl;

    // We can also change the element
    myCars[1] = "Phantom";

    // Let's print it out
    std::cout << "The changed car is: " << myCars[1] << std::endl;

    return 0;
}

int testStruct() {
    // Create a structure variable called testStructure
    struct {
        int primary;
        string name;
    } testStructureA, testStructureB, testStructureC;

    // Assign values to members of testStructure
    testStructureA.primary = 1;
    testStructureA.name = "Kernel";

    testStructureB.primary = 2;
    testStructureB.name = "AHahahha";

    testStructureC.primary = 3;
    testStructureC.name = "OMG";

    // Print members of testStructure
    std::cout << "The value of testStructure.primary is: " << testStructureA.primary << std::endl;
    std::cout << "The value of testStructure.name is: " << testStructureA.name << std::endl;

    // Named Structures
    // semi-colon is required...
    struct tDataType {
        int tNum;
        string tComment;
    };

    tDataType tVar;
    tVar.tNum = 1;
    tVar.tComment = "Help me!";

    // Print the structure member
    std::cout << tVar.tNum << " " << tVar.tComment << std::endl;

    // Creating References (alias)
    string food = "Pizza";
    string &meal = food;

    std::cout << meal << std::endl;

    return 0;
}
