# Permute
C++ function to run through all permutations of a system with length of a set _n_ and _k_ elements.
Requires C++11 and [Base conversion](https://github.com/nelsyeung/base-conversion).

# Usage
```cpp
n::permute(int n, int k, void (*f)(const std::string &));
n::permute(3, 2, own_func);
```

# Full example
```cpp
#include "permute.hpp"

void print_configuration(const std::string &configuration) {
    std::cout << configuration << std::endl;
}

int main()
{
    n::permute(3, 2, print_configuration);

    return 0;
}

Output:
000
001
010
011
100
101
110
111
```
