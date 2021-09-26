#ifndef OPERATINGSYSTEM_H
#define OPERATINGSYSTEM_H

#include "SDL.h"
#include <string>
#include <iostream>

class OperatingSystem
{
public:
    OperatingSystem() : OS(std::string())
    {
        OS = getPlatform();
    }


    std::string getPlatform();
    void printPlatform();

private:
    std::string OS;
};

std::string OperatingSystem::getPlatform()
{
    const char *platform = SDL_GetPlatform();
    std::string OS(platform);
     return OS;
};

void OperatingSystem::printPlatform()
{
    
         std::cout << "Platform Detected: " << OS << std::endl;
  
};

#endif