#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

#include "PriorityQueue.h"

using namespace std;
typedef chrono::high_resolution_clock Clock;

/// Function to fill an array based priority queue and a heap based priority queue
vector<int> randomValues(int n)
{
    vector<int> temp;
	srand(time(NULL));
 
	for(int i = 0;i < n;i++)
	{
		int num = rand() % ((2*n)+1);
		temp.push_back(num);
	}

    return temp;
}

int main()
{
    vector<int> valuesToAdd = randomValues(5000);
    // Insert
    // 500 Values
    ArrayBasedPriorityQueue apq1;
    auto t1 = Clock::now();
    for(int i = 0; i < 500; i++)
    {
        apq1.Insert(valuesToAdd[i]);
    }
    auto t2 = Clock::now();
    int apq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "Insert Array Based Priority Queue Run Time with 500 values: " << apq_run_time << "us" << endl;

    HeapBasedPriorityQueue hpq1;
    t1 = Clock::now();
    for(int i = 0; i < 500; i++)
    {
        hpq1.Insert(valuesToAdd[i]);
    }
    t2 = Clock::now();
    int hpq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "Insert Heap Based Priority Queue Run Time with 500 values: " << hpq_run_time << "us" << endl;

    // 1000 Values
    ArrayBasedPriorityQueue apq2;
    t1 = Clock::now();
    for(int i = 0; i < 1000; i++)
    {
        apq2.Insert(valuesToAdd[i]);
    }
    t2 = Clock::now();
    apq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "Insert Array Based Priority Queue Run Time with 1000 values: " << apq_run_time << "us" << endl;

    HeapBasedPriorityQueue hpq2;
    t1 = Clock::now();
    for(int i = 0; i < 1000; i++)
    {
        hpq2.Insert(valuesToAdd[i]);
    }
    t2 = Clock::now();
    hpq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "Insert Heap Based Priority Queue Run Time with 1000 values: " << hpq_run_time << "us" << endl;

    // 2000 Values
    ArrayBasedPriorityQueue apq3;
    t1 = Clock::now();
    for(int i = 0; i < 2000; i++)
    {
        apq3.Insert(valuesToAdd[i]);
    }
    t2 = Clock::now();
    apq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "Insert Array Based Priority Queue Run Time with 2000 values: " << apq_run_time << "us" << endl;

    HeapBasedPriorityQueue hpq3;
    t1 = Clock::now();
    for(int i = 0; i < 2000; i++)
    {
        hpq3.Insert(valuesToAdd[i]);
    }
    t2 = Clock::now();
    hpq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "Insert Heap Based Priority Queue Run Time with 2000 values: " << hpq_run_time << "us" << endl;

    // 5000 Values
    ArrayBasedPriorityQueue apq4;
    t1 = Clock::now();
    for(int i = 0; i < 5000; i++)
    {
        apq4.Insert(valuesToAdd[i]);
    }
    t2 = Clock::now();
    apq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "Insert Array Based Priority Queue Run Time with 5000 values: " << apq_run_time << "us" << endl;

    HeapBasedPriorityQueue hpq4;
    t1 = Clock::now();
    for(int i = 0; i < 5000; i++)
    {
        hpq4.Insert(valuesToAdd[i]);
    }
    t2 = Clock::now();
    hpq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "Insert Heap Based Priority Queue Run Time with 5000 values: " << hpq_run_time << "us" << endl;

    // Remove
    // 500 Values
    t1 = Clock::now();
    for(int i = 0; i < 500; i++)
    {
        apq1.DeQueue();
    }
    t2 = Clock::now();
    apq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "DeQueue Array Based Priority Queue Run Time with 500 values: " << apq_run_time << "us" << endl;

    t1 = Clock::now();
    for(int i = 0; i < 500; i++)
    {
        hpq1.DeQueue();
    }
    t2 = Clock::now();
    hpq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "DeQueue Heap Based Priority Queue Run Time with 500 values: " << hpq_run_time << "us" << endl;

    // 1000 Values
    t1 = Clock::now();
    for(int i = 0; i < 1000; i++)
    {
        apq2.DeQueue();
    }
    t2 = Clock::now();
    apq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "DeQueue Array Based Priority Queue Run Time with 1000 values: " << apq_run_time << "us" << endl;

    t1 = Clock::now();
    for(int i = 0; i < 1000; i++)
    {
        hpq2.DeQueue();
    }
    t2 = Clock::now();
    hpq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "DeQueue Heap Based Priority Queue Run Time with 1000 values: " << hpq_run_time << "us" << endl;

    // 2000 Values
    t1 = Clock::now();
    for(int i = 0; i < 2000; i++)
    {
        apq3.DeQueue();
    }
    t2 = Clock::now();
    apq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "DeQueue Array Based Priority Queue Run Time with 2000 values: " << apq_run_time << "us" << endl;

    t1 = Clock::now();
    for(int i = 0; i < 2000; i++)
    {
        hpq3.DeQueue();
    }
    t2 = Clock::now();
    hpq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "DeQueue Heap Based Priority Queue Run Time with 2000 values: " << hpq_run_time << "us" << endl;

    // 5000 Values
    t1 = Clock::now();
    for(int i = 0; i < 5000; i++)
    {
        apq4.DeQueue();
    }
    t2 = Clock::now();
    apq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "DeQueue Array Based Priority Queue Run Time with 5000 values: " << apq_run_time << "us" << endl;

    t1 = Clock::now();
    for(int i = 0; i < 5000; i++)
    {
        hpq4.DeQueue();
    }
    t2 = Clock::now();
    hpq_run_time = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "DeQueue Heap Based Priority Queue Run Time with 5000 values: " << hpq_run_time << "us" << endl;

    return 0;
}