#include <iostream>
#include "help.h"
#include <chrono>
#include <iomanip>
#include <thread>
#include <filesystem>

using  namespace  std;
using  namespace  this_thread;
using  namespace  filesystem;
using  namespace  chrono;


int main()
{
   compiler();
   // checkOs();
   auto now = system_clock::now();
   time_t now_time_t = system_clock::to_time_t(now);

    // Format and print the time
    cout << "Current time: " << put_time(std::localtime(&now_time_t), "%m-%d-%Y %H:%M:%S.%s") << std::endl;

    sleep_for(milliseconds(3000));
  //  wait(100);
    now = system_clock::now();
    now_time_t = system_clock::to_time_t(now);
    cout << "Current time: " << put_time(std::localtime(&now_time_t), "%Y-%m-%d %H:%M:%S:%s") << std::endl;

    cout << "Hello, World!" << endl;
    const path currentPath = current_path();
    cout << "Current working directory: " << currentPath << endl;
    return 0;
}
