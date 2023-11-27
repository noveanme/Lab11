// #include "PriorityQueue.h"
// #include <iostream>

// PriorityQueueInterface::PriorityQueueInterface() : m_count(0)
// {
// }

// // Array Based Priority Queue

// ArrayBasedPriorityQueue::ArrayBasedPriorityQueue()
// {
// }

// ArrayBasedPriorityQueue::~ArrayBasedPriorityQueue()
// {
// }

// bool ArrayBasedPriorityQueue::Insert(int value)
// {
//     if (m_count >= 5000)
//     {
//         std::cout << "Queue is full" << std::endl;
//         return false;
//     }

//     values.push_back(value);
//     m_count++;

    // for (size_t i = 0; i < values.size(); i++)
    // {
    //     for (size_t j = 0; j < values.size() - i - 1; j++)
    //     {
    //         if (values[j] > values[j+1])
    //         {
    //             int temp = values[j];
    //             values[j] = values[j+1];
    //             values[j+1] = temp;
    //         }
            
    //     }
    // }
    // return true;
// }

// bool ArrayBasedPriorityQueue::DeQueue()
// {
//     if (values.empty()) {
//         // Handle the case when the priority queue is empty.
//         return false;
//     }

//     m_count--;
//     values.pop_back();
    
//     return true;
// }

// std::string ArrayBasedPriorityQueue::PrintPriorityQueue()
// {
//     if (values.size() == 0)
//     {
//         return "";
//     }

//     std::string pqValues = "";
//     for (size_t i = 0; i < values.size(); i++)
//     {
//         std::cout << values[i] << std::endl;
//         pqValues += std::to_string(values[i]);
//     }
    
//     return pqValues;
// }

// HeapBasedPriorityQueue::HeapBasedPriorityQueue()
// {
// }

// HeapBasedPriorityQueue::~HeapBasedPriorityQueue()
// {
// }

// bool HeapBasedPriorityQueue::Insert(int value) {
//     if (m_count >= 5000)
//     {
//         std::cout << "Queue is full" << std::endl;
//         return false;
//     }

//     heap.push_back(value);
//     m_count++;
//     int currentIndex = heap.size() - 1;

//     // Percolate up to maintain the min-heap property.
//     while (currentIndex > 0) {
//         int parentIndex = (currentIndex - 1) / 2;
//         if (heap[currentIndex] < heap[parentIndex]) { // Reverse the comparison
//             std::swap(heap[currentIndex], heap[parentIndex]);
//             currentIndex = parentIndex;
//         } else {
//             break;
//         }
//     }
// }

// bool HeapBasedPriorityQueue::DeQueue()
// {
//     if (heap.empty()) {
//         return false; // The heap is empty.
//     }

//     // Replace the root with the last element.
//     heap[0] = heap.back();
//     m_count--;
//     heap.pop_back();

//     // Percolate down to maintain the min-heap property.
//     int currentIndex = 0;
//     while (true) {
//         int leftChildIndex = 2 * currentIndex + 1;
//         int rightChildIndex = 2 * currentIndex + 2;
//         int smallestIndex = currentIndex;

//         if (leftChildIndex < heap.size() && heap[leftChildIndex] < heap[smallestIndex]) { // Reverse the comparison
//             smallestIndex = leftChildIndex;
//         }
//         if (rightChildIndex < heap.size() && heap[rightChildIndex] < heap[smallestIndex]) { // Reverse the comparison
//             smallestIndex = rightChildIndex;
//         }

//         if (smallestIndex != currentIndex) {
//             std::swap(heap[currentIndex], heap[smallestIndex]);
//             currentIndex = smallestIndex;
//         } else {
//             break;
//         }
//     }

//     return true;
// }

// std::string HeapBasedPriorityQueue::PrintPriorityQueue()
// {
//     if (heap.size() == 0)
//     {
//         return "";
//     }

//     std::string pqValues = "";
//     for (size_t i = 0; i < heap.size(); i++)
//     {
//         std::cout << heap[i] << std::endl;
//         pqValues += std::to_string(heap[i]);
//     }
    
//     return pqValues;
// }