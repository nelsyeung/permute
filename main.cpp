#include "permute.hpp"

void print_configuration(const std::string &configuration) {
    std::cout << configuration << std::endl;
}

int main()
{
    n::permute(3, 2, print_configuration);

    return 0;
}
