#include <iostream>
#include <thread>
#include <string>
#include <chrono>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono_literals;

namespace PrintUtils
{
    void SlowPrint(const string text, int rate = 20)
    {
        for (char c : text)
        {
            cout << c;
            cout.flush();
            sleep_for(chrono::milliseconds(1000 / rate));
        }
        cout << endl;
    }
}

int main() 
{
    PrintUtils::SlowPrint("hello world", 20);
    return 0;
}