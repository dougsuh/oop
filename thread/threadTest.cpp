#include <iostream>
#include <thread>    // for thread
#include <Windows.h> // for Sleep
// chatGTP helped
const int numThreads = 3;
// Function to be executed by the thread
void threadFunction(int threadId)
{
    static int ii[numThreads];     // initially all 0s.
    while (true) {                 // infinite loop
        Sleep(500+ threadId*100);  // sleep 500ms or more
        std::cout << "Thread " << threadId << " " << ii[threadId]++ << std::endl;
        if(ii[threadId] > 20) break;
    }
}

int main()
{
    std::thread threads[numThreads];

    // Create multiple threads
    for (int i = 0; i < numThreads; ++i)
    {
        threads[i] = std::thread(threadFunction, i);
    }
    // Wait for all the threads to finish execution
    for (int i = 0; i < numThreads; ++i)
    {
        threads[i].join();
    }
    std::cout << "All threads finished" << std::endl;

    return 0;
}