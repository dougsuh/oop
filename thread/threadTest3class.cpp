#include <iostream>
#include <thread>    // for thread
#include <Windows.h> // for Sleep
// chatGTP helped
const int numThreads = 3;
// Function to be executed by the thread
class actor {
public:
    actor() : n(0) { id = N++; };
    static int N; // number of running threads
    void acting();
    int n,id; // 
}; 
int actor::N = 0;
void actor::acting() {
    Sleep(500+id*100);  // sleep 500ms or more
    std::cout << "Thread " << id << " " << n++ << std::endl;
}
actor *aa;
void thFn(int threadId) // thFn = threadFunction
{
    while (true) {                 // infinite loop
        aa[threadId].acting();
        if (aa[threadId].n > 20) break;
    }
}
int main()
{
    std::thread threads[numThreads];
    aa = new actor[numThreads];
    // Create multiple threads
    for (int i = 0; i < numThreads; ++i)
    {
        aa[i].id = i;
        threads[i] = std::thread(thFn, i);
    }
    // Wait for all the threads to finish execution
    for (int i = 0; i < numThreads; ++i)
    {
        threads[i].join();
    }
    std::cout << "All threads finished" << std::endl;

    return 0;
}