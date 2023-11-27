#include "PriorityQueue.h"
#include <iostream>

// Constructor for PriorityQueueInterface
PriorityQueueInterface::PriorityQueueInterface() : m_count(0) {}

// ArrayBasedPriorityQueue

ArrayBasedPriorityQueue::ArrayBasedPriorityQueue() {
}

ArrayBasedPriorityQueue::~ArrayBasedPriorityQueue()
{
}

bool ArrayBasedPriorityQueue::Insert(int value) {
    if (m_count >= 5000) {
        return false; // Queue is full, cannot insert.
    }

    values[m_count] = value;
    m_count++;

    // Sort the array using bubble sort
    for (size_t i = 0; i < m_count; i++)
    {
        for (size_t j = 0; j < m_count - i - 1; j++)
        {
            if (values[j] > values[j+1])
            {
                int temp = values[j];
                values[j] = values[j+1];
                values[j+1] = temp;
            }
            
        }
    }
    return true;
}

bool ArrayBasedPriorityQueue::DeQueue() {
    if (m_count == 0) {
        return false; // Queue is empty, cannot dequeue.
    }

    m_count--;  // Dequeue the last value in the array because it has the highest priority
    return true;
}

std::string ArrayBasedPriorityQueue::PrintPriorityQueue() {
    std::string result = "";
    for (int i = 0; i < m_count; i++) {
        result += std::to_string(values[i]);    // Store each element in the array to the result string
    }
    std::cout << result << std::endl;   // Print out the priority queue in priority order
    return result;
}

// HeapBasedPriorityQueue

HeapBasedPriorityQueue::HeapBasedPriorityQueue() {
}

HeapBasedPriorityQueue::~HeapBasedPriorityQueue()
{
}

bool HeapBasedPriorityQueue::Insert(int value) {
    if (m_count >= 5000) {
        return false; // Queue is full, cannot insert.
    }

    heap[m_count] = value;
    m_count++;

    // Make sure you insert the elements into the array in sorted order
    for (size_t i = 1; i < m_count; i++)
    {
        if (heap[i] > heap[(i - 1) / 2])
        {
            int j = i;

            while (heap[j] > heap[(j - 1)/ 2])
            {
                std::swap(heap[j], heap[(j - 1) / 2]);
                j = (j - 1)/2;
            }
        }
    }

    return true;
}

bool HeapBasedPriorityQueue::DeQueue() {
    if (m_count == 0) {
        return false; // Queue is empty, cannot dequeue.
    }

    m_count--;
    std::swap(heap[0], heap[m_count]);  // Swap the last value of the array and the first value
    // Resort the array for the new root value
    for (size_t i = 1; i < m_count; i++)
    {
        if (heap[i] > heap[(i - 1) / 2])
        {
            int j = i;

            while (heap[j] > heap[(j - 1)/ 2])
            {
                std::swap(heap[j], heap[(j - 1) / 2]);
                j = (j - 1)/2;
            }
        }
    }

    return true;
}

std::string HeapBasedPriorityQueue::PrintPriorityQueue() {
    std::string result = "";

    // Copy the heap to a temporary array
    int sortedHeap[5000];
    int sortedCount = m_count;
    for (int i = 0; i < m_count; i++) {
        sortedHeap[i] = heap[i];
    }

    // Sort the array in priority order
    while (sortedCount > 0) {
        // Find the minimum element in the sorted heap (which has the highest priority)
        int minIndex = 0;
        for (int i = 1; i < sortedCount; i++) {
            if (sortedHeap[i] < sortedHeap[minIndex]) {
                minIndex = i;
            }
        }

        // Append the minimum element to the result
        result += std::to_string(sortedHeap[minIndex]);

        // Remove the minimum element from the sorted heap
        for (int i = minIndex; i < sortedCount - 1; i++) {
            sortedHeap[i] = sortedHeap[i + 1];
        }
        sortedCount--;
    }

    std::cout << result << std::endl;   // Print out the heap in priority order
    return result;
}
