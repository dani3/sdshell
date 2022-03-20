#pragma once

class Shell
{
public:
    // Constructor sin argumentos.
    Shell();
    // Destructor.
    virtual ~Shell();

    // Método para mostrar el prompt.
    //
    // `const` para indicar que no se modifica el estado
    // de la shell.
    void Prompt() const;

private:
};
