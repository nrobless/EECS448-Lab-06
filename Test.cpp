#include "Test.h"

Test::Test() {}

void Test::runTests() {
    int testsPassed = 0;
    int numTests = 18;

    std::cout << "*** Running tests... ***\n\n";
    
    if( test1() ) {
        testsPassed++;
    }
    if( test2() ) {
        testsPassed++;
    }
    if( test3() ) {
        testsPassed++;
    }
    if( test4() ) {
        testsPassed++;
    }
    if( test5() ) {
        testsPassed++;
    }
    if( test6() ) {
        testsPassed++;
    }
    if( test7() ) {
        testsPassed++;
    }
    if( test8() ) {
        testsPassed++;
    }
    if( test9() ) {
        testsPassed++;
    }
    if( test10() ) {
        testsPassed++;
    }
    if( test11() ) {
        testsPassed++;
    }
    if( test12() ) {
        testsPassed++;
    }
    if( test13() ) {
        testsPassed++;
    }
    if( test14() ) {
        testsPassed++;
    }
    if( test15() ) {
        testsPassed++;
    }
    if( test16() ) {
        testsPassed++;
    }
    if( test17() ) {
        testsPassed++;
    }
    if( test18() ) {
        testsPassed++;
    }

    std::cout << "\n*** Tests passed: " << testsPassed << " / " << numTests << " ***\n";
}

bool Test::test1() {
    std::cout << "Test 1: size of empty list is 0...                                         ";

    LinkedListOfInts list;
    int size = list.size();
    if( size == 0 ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected 0, got " << size << "\n";
        return false;
    }
}

bool Test::test2() {
    std::cout << "Test 2: size returns correct value after 1 addFront...                     ";

    LinkedListOfInts list;
    list.addFront(0);
    int size = list.size();
    if( size == 1 ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected 1, got " << size << "\n";
        return false;
    }
}

bool Test::test3() {
    std::cout << "Test 3: size returns correct value after 1 addBack...                      ";

    LinkedListOfInts list;
    list.addBack(0);
    int size = list.size();
    if( size == 1 ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected 1, got " << size << "\n";
        return false;
    }
}

bool Test::test4() {
    std::cout << "Test 4: size returns correct value after 10 addFront...                    ";

    LinkedListOfInts list;
    for( int i = 0; i < 10; i++ ) {
        list.addFront(0);
    }
    int size = list.size();
    if( size == 10 ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected 10, got " << size << "\n";
        return false;
    }
}

bool Test::test5() {
    std::cout << "Test 5: size returns correct value after 10 addBack...                     ";

    LinkedListOfInts list;
    for( int i = 0; i < 10; i++ ) {
        list.addBack(0);
    }
    int size = list.size();
    if( size == 10 ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected 10, got " << size << "\n";
        return false;
    }
}

bool Test::test6() {
    std::cout << "Test 6: size returns correct value after 10 addFront and 1 removeFront...  ";

    LinkedListOfInts list;
    for( int i = 0; i < 10; i++ ) {
        list.addFront(0);
    }
    list.removeFront();
    int size = list.size();
    if( size == 9 ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected 9, got " << size << "\n";
        return false;
    }
}

bool Test::test7() {
    std::cout << "Test 7: size returns correct value after 10 addBack and 1 removeBack...    ";

    LinkedListOfInts list;
    for( int i = 0; i < 10; i++ ) {
        list.addBack(0);
    }
    list.removeBack();
    int size = list.size();
    if( size == 9 ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected 9, got " << size << "\n";
        return false;
    }
}

bool Test::test8() {
    std::cout << "Test 8: isEmpty returns true on empty list...                              ";

    LinkedListOfInts list;
    if( list.isEmpty() ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected true, got false\n";
        return false;
    }
}

bool Test::test9() {
    std::cout << "Test 9: isEmpty returns false after 1 addFront...                          ";

    LinkedListOfInts list;
    list.addFront(0);
    if( !list.isEmpty() ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected false, got true\n";
        return false;
    }
}

bool Test::test10() {
    std::cout << "Test 10: removeFront returns false on empty list...                        ";

    LinkedListOfInts list;
    if( !list.removeFront() ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected false, got true\n";
        return false;
    }
}

bool Test::test11() {
    std::cout << "Test 11: removeBack returns false on empty list...                         ";

    LinkedListOfInts list;
    if( !list.removeBack() ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected false, got true\n";
        return false;
    }
}

bool Test::test12() {
    std::cout << "Test 12: removeFront returns true after 1 addFront...                      ";

    LinkedListOfInts list;
    list.addFront(0);
    if( list.removeFront() ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected true, got false\n";
        return false;
    }
}

bool Test::test13() {
    std::cout << "Test 13: removeBack returns true after 1 addBack...                        ";

    LinkedListOfInts list;
    list.addBack(0);
    if( list.removeBack() ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected true, got false\n";
        return false;
    }
}

bool Test::test14() {
    std::cout << "Test 14: addFront adds in the correct order...                             ";

    LinkedListOfInts list;
    for( int i = 0; i < 2; i++ ) {
        list.addFront(i);
    }
    std::vector<int> vec = list.toVector();
    if( vec[0] == 1 ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected front to be 1, got " << vec[0] << "\n";
        return false;
    }
}

bool Test::test15() {
    std::cout << "Test 15: addBack adds in the correct order...                              ";

    LinkedListOfInts list;
    for( int i = 0; i < 2; i++ ) {
        list.addBack(i);
    }
    std::vector<int> vec = list.toVector();
    if( vec[0] == 0 ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected front to be 0, got " << vec[0] << "\n";
        return false;
    }
}

bool Test::test16() {
    std::cout << "Test 16: search returns false on empty list...                             ";

    LinkedListOfInts list;
    if( !list.search(1) ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected false, got true\n";
        return false;
    }
}

bool Test::test17() {
    std::cout << "Test 17: search returns false when value is not in list...                 ";

    LinkedListOfInts list;
    for( int i = 0; i < 10; i++ ) {
        list.addBack(0);
    }
    if( !list.search(1) ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected false, got true\n";
        return false;
    }
}

bool Test::test18() {
    std::cout << "Test 18: search returns true when value is in list...                      ";

    LinkedListOfInts list;
    for( int i = 0; i < 9; i++ ) {
        list.addBack(0);
    }
    list.addBack(1);
    if( list.search(1) ) {
        std::cout << "PASSED\n";
        return true;
    }
    else {
        std::cout << "FAILED\n";
        std::cout << "    Reason: Expected true, got false\n";
        return false;
    }
}