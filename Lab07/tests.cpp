#include "gtest/gtest.h"
#include "PriorityQueue.h"

// Test the insert function with multiple values
TEST(ArrayBasedPriorityQueue, Insert1) {
    ArrayBasedPriorityQueue pq;
    pq.Insert(1);
    pq.Insert(2);
    pq.Insert(3);

    std::string expected_pq = "123";
    ASSERT_EQ(pq.PrintPriorityQueue(), expected_pq);
}

// Test the insert function with the same number
TEST(ArrayBasedPriorityQueue, Insert2) {
    ArrayBasedPriorityQueue pq;
    pq.Insert(1);
    pq.Insert(1);
    pq.Insert(2);

    std::string expected_pq = "112";
    ASSERT_EQ(pq.PrintPriorityQueue(), expected_pq);
}

// Attempt to DeQueue an empty queue
TEST(ArrayBasedPriorityQueue, DeQueue1) {
    ArrayBasedPriorityQueue pq;
    
    ASSERT_FALSE(pq.DeQueue());
}

// DeQueue a value
TEST(ArrayBasedPriorityQueue, DeQueue2) {
    ArrayBasedPriorityQueue pq;
    
    pq.Insert(1);
    pq.Insert(2);
    pq.Insert(3);
    pq.DeQueue();

    ASSERT_EQ(pq.PrintPriorityQueue(), "12");
}

// DeQueue two values with the same priority
TEST(ArrayBasedPriorityQueue, DeQueue3) {
    ArrayBasedPriorityQueue pq;
    
    pq.Insert(1);
    pq.Insert(1);
    pq.Insert(2);
    pq.Insert(3);
    pq.Insert(5);
    pq.DeQueue();
    pq.DeQueue();

    ASSERT_EQ(pq.PrintPriorityQueue(), "112");
}

// Print an array based priority queue in priority order
TEST(ArrayBasedPriorityQueue, PrintPriorityQueue1) {
    ArrayBasedPriorityQueue pq;

    pq.Insert(3);
    pq.Insert(1);
    pq.Insert(4);

    std::string expected = "134";
    ASSERT_EQ(pq.PrintPriorityQueue(), expected);
}

// Print an empty array based priority queue
TEST(ArrayBasedPriorityQueue, PrintPriorityQueue2) {
    ArrayBasedPriorityQueue pq;

    std::string expected = "";
    ASSERT_EQ(pq.PrintPriorityQueue(), expected);
}

// Test the insert function with multiple values
TEST(HeapBasedPriorityQueue, Insert1) {
    HeapBasedPriorityQueue pq;
    pq.Insert(1);
    pq.Insert(2);
    pq.Insert(3);
    pq.Insert(5);
    pq.Insert(7);
    pq.Insert(4);

    std::string expected_pq = "123457";
    ASSERT_EQ(pq.PrintPriorityQueue(), expected_pq);
}

// Test the insert function with the same number
TEST(HeapBasedPriorityQueue, Insert2) {
    HeapBasedPriorityQueue pq;
    pq.Insert(1);
    pq.Insert(1);
    pq.Insert(2);

    std::string expected_pq = "112";
    ASSERT_EQ(pq.PrintPriorityQueue(), expected_pq);
}

// Attempt to DeQueue an empty queue
TEST(HeapBasedPriorityQueue, DeQueue1) {
    HeapBasedPriorityQueue pq;
    
    ASSERT_FALSE(pq.DeQueue());
}

// DeQueue a value
TEST(HeapBasedPriorityQueue, DeQueue2) {
    HeapBasedPriorityQueue pq;
    
    pq.Insert(1);
    pq.Insert(2);
    pq.Insert(3);
    pq.DeQueue();

    ASSERT_EQ(pq.PrintPriorityQueue(), "12");
}

// DeQueue two values with the same priority
TEST(HeapBasedPriorityQueue, DeQueue3) {
    HeapBasedPriorityQueue pq;
    
    pq.Insert(1);
    pq.Insert(1);
    pq.Insert(2);
    pq.Insert(3);
    pq.Insert(5);
    pq.DeQueue();
    pq.DeQueue();

    ASSERT_EQ(pq.PrintPriorityQueue(), "112");
}

// Print a heap based priority queue in priority order
TEST(HeapBasedPriorityQueue, PrintPriorityQueue1) {
    HeapBasedPriorityQueue pq;

    pq.Insert(3);
    pq.Insert(1);
    pq.Insert(4);

    std::string expected = "134";
    ASSERT_EQ(pq.PrintPriorityQueue(), expected);
}

// Print an empty heap based priority queue
TEST(HeapBasedPriorityQueue, PrintPriorityQueue2) {
    HeapBasedPriorityQueue pq;

    std::string expected = "";
    ASSERT_EQ(pq.PrintPriorityQueue(), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
