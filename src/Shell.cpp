#include "Shell.h"

#include <iostream>

Shell::Shell()
{
}

Shell::~Shell()
{
}

void Shell::Prompt() const
{
    std::cout << "> ";
}
