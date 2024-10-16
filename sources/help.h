#pragma once


void compiler() {
#ifdef __clang__
    std::cout << " clang " << '\n';
#else
    std::cout << " gcc " << '\n';
#endif
}

void checkOs() {

#if __linux__
    std::cout << "Hello, GNU/Linux!" << '\n';
#elif _WIN32
#if defined(_WIN64)
    std::cout << "Hello, Windows 64-bit!" << '\n';
#else
    std::cout << "Hello, Windows!" << '\n';
#endif
#else
    std::cout << "Hello, Other!" << '\n';
#endif
}//
// Created by Boris on 20/09/2024.
//
