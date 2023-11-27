#pragma once

#include <string>
#include <vector>

class PriorityQueueInterface
{
    public:
        PriorityQueueInterface();   // Default constructor
        virtual bool Insert(int value) = 0;  // Add an item to the priority queue
        virtual bool DeQueue() = 0; // Remove the highest priority item from the queue
        virtual std::string PrintPriorityQueue() = 0;  // Print the items in the queue in priority order and retrun a string representation
    protected:
        int m_count;
};

class ArrayBasedPriorityQueue : public PriorityQueueInterface
{
    public:
        ArrayBasedPriorityQueue();  // Default constructor
        ~ArrayBasedPriorityQueue();  // Default destructor
        virtual bool Insert(int value) override;  // Add an item to the priority queue
        virtual bool DeQueue() override; // Remove the highest priority item from the queue
        virtual std::string PrintPriorityQueue() override;  // Print the items in the queue in priority order and retrun a string representation
    private:
        int values[5000];   // Array for the priority queue
};

class HeapBasedPriorityQueue : public PriorityQueueInterface
{
    public:
        HeapBasedPriorityQueue();   // Default constructor
        ~HeapBasedPriorityQueue();  // Default destructor
        virtual bool Insert(int value) override;  // Add an item to the priority queue
        virtual bool DeQueue() override; // Remove the highest priority item from the queue
        virtual std::string PrintPriorityQueue() override;  // Print the items in the queue in priority order and retrun a string representation
    private:
        int heap[5000];  // Array for the priority queue
};
