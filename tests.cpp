#define CATCH_CONFIG_MAIN
#include "Stack.h"
#include "catch.hpp"

TEST_CASE("constructors") {
    SECTION("default") {
        // valid parameter
        Stack s1(3);

        // invalid parameter
        // REQUIRE_THROWS_AS(new Stack(0), StackException);
    }
}

// TEST_CASE("isEmpty") {
//     SECTION("capacity 1") {
//         Stack s1(1);
//         REQUIRE(s1.isEmpty());
//     }
//     SECTION("capacity > 1") {
//         Stack s2(3);
//         REQUIRE(s2.isEmpty());
//     }
// }

// TEST_CASE("testPushPeekTopAndIsFull()") {
//	SECTION("capacity 1") {
//	Stack s1(1);
//	s1.push(11);
//	REQUIRE(s1.peekTop() == 11 );
//	REQUIRE(!s1.isEmpty() );
//	REQUIRE(s1.isFull() );
//  // REQUIRE_THROWS_AS(s1.push(22), StackException);
//  }
//	SECTION("capacity > 1") {
//	Stack s2(3);
//	s2.push(11);
//	REQUIRE(s2.peekTop() == 11);
//	s2.push(22);
//	REQUIRE(s2.peekTop() == 22);
//	s2.push(33);
//	REQUIRE(s2.peekTop() == 33);
//  // REQUIRE_THROWS_AS(s2.push(44), StackException);
//  }
// }
//
// TEST_CASE("testPop()") {
//	SECTION("try empty, capacity 1") {
//	Stack s1(1);
//	REQUIRE(s1.isEmpty() );
// // REQUIRE_THROWS_AS(s1.peekTop(), StackException);
// // REQUIRE_THROWS_AS(s1.pop(), StackException);
// }
//	SECTION("empty, capacity > 1") {
//	Stack s2(3);
//  // REQUIRE_THROWS_AS(s2.pop(), StackException);
//  // REQUIRE_THROWS_AS(s2.peekTop(), StackException);
//  }
//	SECTION("non-empty, capacity 1") {
//	Stack s3(1);
//	s3.push(11);
//	REQUIRE(s3.peekTop() == 11);
//	REQUIRE(s3.pop() == 11);
//  // REQUIRE_THROWS_AS(s3.pop(), StackException);
//  // REQUIRE_THROWS_AS(s3.peekTop(), StackException);
//  }
//	SECTION("non-empty, capacity > 1") {
//	Stack s4(3);
//	s4.push(11);
//	s4.push(22);
//	s4.push(33);
//	REQUIRE(s4.peekTop() == 33);
//	REQUIRE(s4.pop() == 33);
//	REQUIRE(s4.peekTop() == 22);
//	REQUIRE(s4.pop() == 22);
//	REQUIRE(s4.peekTop() == 11);
//	REQUIRE(s4.pop() == 11);
//  // REQUIRE_THROWS_AS(s4.pop(), StackException);
//  // REQUIRE_THROWS_AS(s4.peekTop(), StackException);
//  }
// }

// TEST_CASE("testCopyConstructor()") {
//     SECTION("minimal empty Stack") {
//         Stack s1(1);
//         Stack s2(s1);
//         REQUIRE(s2.isEmpty());
//     }
//     SECTION("minimal non-empty Stack") {
//         Stack s3(1);
//         s3.push(11);
//         Stack s4(s3);
//         REQUIRE(!s4.isEmpty());
//         REQUIRE(s4.isFull());
//         REQUIRE(s4.peekTop() == 11);
//     }
//     SECTION("non-minimal, non-empty stack") {
//         Stack s5(3);
//         s5.push(11);
//         s5.push(22);
//         s5.push(33);
//         Stack s6(s5);
//         REQUIRE(s6.pop() == 33);
//         REQUIRE(s6.pop() == 22);
//         REQUIRE(s6.pop() == 11);
//         REQUIRE(s5.peekTop() == 33);
//     }
// }

// TEST_CASE("testAssignment()") {
//     SECTION("minimal empty Stacks, same size") {
//         Stack s1(1);
//         Stack s2(1);
//         s2 = s1;
//         REQUIRE(s2.isEmpty());
//     }
//     SECTION("minimal non-empty Stack to empty Stack, same capacity") {
//         Stack s3(1);
//         s3.push(11);
//         Stack s4(1);
//         s4 = s3;
//         REQUIRE(!s4.isEmpty());
//         REQUIRE(s4.isFull());
//         REQUIRE(s4.peekTop() == 11);
//     }
//     SECTION("minimal empty stack to non-empty stack, same capacity") {
//         Stack s5(1);
//         Stack s6(1);
//         s6.push(11);
//         s6 = s5;
//         REQUIRE(s6.isEmpty());
//     }
//     SECTION(
//         "non-minimal non-empty stack to empty stack, different capacities") {
//         Stack s7(3);
//         s7.push(11);
//         s7.push(22);
//         s7.push(33);
//         Stack s8(2);
//         s8 = s7;
//         REQUIRE(s8.pop() == 33);
//         REQUIRE(s8.pop() == 22);
//         REQUIRE(s8.pop() == 11);
//         REQUIRE(s7.peekTop() == 33);
//     }
//     SECTION(
//         "non-minimal, empty stack to non-empty stack, different capacities") {
//         Stack s9(2);
//         Stack s10(3);
//         s10.push(11);
//         s10.push(22);
//         s10.push(33);
//         s10 = s9;
//         REQUIRE(s10.isEmpty());
//     }
//     SECTION("self-assignment, minimal size") {
//         Stack s11(1);
//         s11.push(11);
//         s11 = s11;
//         REQUIRE(s11.isFull());
//         REQUIRE(!s11.isEmpty());
//     }
//     SECTION("chaining") {
//         Stack s12(2);
//         s12.push(11);
//         s12.push(22);
//         Stack s13(1);
//         Stack s14(1);
//         s14 = s13 = s12;
//         REQUIRE(s14.isFull());
//         REQUIRE(s14.pop() == 22);
//         REQUIRE(s14.pop() == 11);
//         REQUIRE(s14.isEmpty());
//     }
//     SECTION("self-assignment, non-minimal size") {
//         Stack s13(2);
//         s13.push(11);
//         s13.push(22);
//         s13 = s13;
//         REQUIRE(!s13.isEmpty());
//         REQUIRE(s13.isFull());
//         REQUIRE(s13.pop() == 22);
//         REQUIRE(s13.pop() == 11);
//         REQUIRE(s13.isEmpty());
//     }
// }
