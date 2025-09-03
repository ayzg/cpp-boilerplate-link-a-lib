#pragma once
#include <cstdint>

//Directs the compiler to choose which type of library to link

#if defined(_DEBUG) && defined(_DLL)
#pragma comment(lib, "plib-mt-gd.lib")
#elif defined(_DEBUG) && !defined(_DLL)
#pragma comment(lib, "plib-mt-sgd.lib")
#elif !defined(_DEBUG) && defined(_DLL)
#pragma comment(lib, "plib-mt.lib")
#elif !defined(_DEBUG) && !defined(_DLL)
#pragma comment(lib, "plib-mt-s.lib")
#endif

uint64_t power(std::uint16_t base, std::uint64_t);
