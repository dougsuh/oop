#include <iostream>
#include <thread>    // for thread
#include <Windows.h> // for Sleep
// chatGTP helped
const int numThreads = 3;
// Function to be executed by the thread
class actor {
public:
    actor() : coin(10) { id = N++; };
    static int N; // number of running threads
    boolean acting();       // the last object
    boolean acting(actor&); // middle objects
    int id, coin; // 
};
int actor::N = 0;
boolean actor::acting(actor& aaa) {
    Sleep(200 + id * 100);  // sleep 200ms or more
    std::cout << " Thread" << id << " " << coin-- << std::endl;
    aaa.coin++;
    if (coin > 0) return true; else return false;
}
boolean actor::acting() {
    Sleep(200 + id * 100);  // sleep 200ms or more
    std::cout << " Thread" << id << " " << coin << std::endl;
    if (coin != 30) return true; else return false;
}
actor* aa;
void thFn(int threadId) // thFn = threadFunction
{
    while (true) {                 // infinite loop
        if (threadId < 2) {
            if (!aa[threadId].acting(aa[threadId + 1])) break;
        }
        else if(!aa[threadId].acting()) break;
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
    std::cout << "All threads are ready\n";
    // Wait for all the threads to finish execution
    for (int i = 0; i < numThreads; ++i)
    {
        threads[i].join();
    }
    std::cout << "All threads finished" << std::endl;

    return 0;
}