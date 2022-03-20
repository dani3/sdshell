#include <iostream>
#include <string>

#include "Shell.h"

int main()
{
    Shell shell;
    shell.Prompt();
    while (1)
    {
        std::string line;
        std::cin >> line;
        // Parsear la linea
        // ...
        shell.Prompt();
    }
}
