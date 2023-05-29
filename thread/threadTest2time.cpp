#include <iostream>
#include <thread>    // for thread
#include <Windows.h> // for Sleep
#include <ctime>     // for clock
// chatGTP helped
const int numThreads = 3;
static int ii[numThreads];     // initially all 0s.
// Function to be executed by the thread
void threadFunction(int threadId)
{
    while (true) {                 // infinite loop
        Sleep(500 + threadId * 100);  // sleep 500ms or more
        std::cout << "Thread " << threadId << " " << ++ii[threadId] << std::endl;
        if (ii[threadId] > 20) break;
    }
}
int main() {
    // Start the timer
    clock_t start = clock();

    std::thread threads[numThreads];

    // Create multiple threads
    for (int i = 0; i < numThreads; ++i)
    {
        threads[i] = std::thread(threadFunction, i);
    }

    // Wait for all the threads to finish execution
    std::cout << "All threads start" << std::endl;
    for (int i = 0; i < numThreads; ++i)
    {
        threads[i].join();
    }
    std::cout << "All threads finished" << std::endl;

    // Stop the timer
    clock_t end = clock();

    // Calculate the elapsed time in seconds
    double elapsed = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    // Output the result
    std::cout << "Elapsed time: " << elapsed << " seconds." << std::endl;
    std::cout << "Expected: " << 0.5 * ii[0] << " seconds." << std::endl;
    std::cout << "Expected: " << 0.6 * ii[1] << " seconds." << std::endl;
    std::cout << "Expected: " << 0.7 * ii[2] << " seconds." << std::endl;

    return 123;
}





