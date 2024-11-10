// scopes - области видимости 

#include <iostream>

double global = 5.932;

namespace local
{
    int localVar = 10;
    double global = 6.2;
}

int main()
{
    // Let's create a scope
    {
        using namespace local; // чтобы можно было юзать переменную localVar из namespace local 
        int foo = 5;
        std::cout << foo << std::endl;
        std::cout << localVar << std::endl;
        std::cout << ::global << std::endl; // :: чтобы взять именно 
        // глобальную переменную (double global = 5.932;), а не переменную с таким же названием
        // из namespace local 
    }
    {
        using local::localVar; // берем не все пространство имен, а лишь одну переменную оттуда
        using std::cout; // так мы делаем допустим в этом случае, чтобы не брать сразу огромное
        // пространство имен
        cout << localVar << std::endl;
    }
}