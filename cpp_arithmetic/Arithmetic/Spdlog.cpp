//#include <spdlog/spdlog.h>
//#include <spdlog/cfg/env.h>  // support for loading levels from the environment  variable
//#include <spdlog/fmt/ostr.h> // support for user defined types
//#include <opencv2/core/core.hpp> 
//
//using namespace std;
//using namespace spdlog;
//
//int main()
//{
//    // Set the log level to "info" and mylogger to "trace":
//    // SPDLOG_LEVEL=info,mylogger=trace && ./example
//    spdlog::cfg::load_env_levels();
//    spdlog::info("Welcome to spdlog version {}.{}.{}  !", SPDLOG_VER_MAJOR, SPDLOG_VER_MINOR, SPDLOG_VER_PATCH);
//    spdlog::warn("Easy padding in numbers like {:08d}", 12);
//    spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin:  {0:b}", 42);
//    spdlog::info("Support for floats {:03.2f}", 1.23456);
//    spdlog::info("Positional args are {1} {0}..", "too", "supported");
//    spdlog::info("{:>8} aligned, {:<8} aligned", "right", "left");
//    return 0;
//}