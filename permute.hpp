#ifndef PERMUTE_PERMUTE_HPP
#define PERMUTE_PERMUTE_HPP

#include <cmath>
#include <string>
#include "base_conversion.hpp"

namespace n {
    int permute(int n, int k, void (*f)(const std::string &)) {
        int numPermutations = pow(k, n);
        std::string configuration;

        // Make sure n and k are range from 2 to 36
        if (n < 2 or k < 2 or n > 36 or k > 36) {
            std::cerr << "Error: n and k need to range from 2 to 36." << std::endl;
            return -1;
        }

        for (int i = 0; i < numPermutations; i++) {
            configuration = convert_base(i, 10, k);
            (*f)(std::string(n - configuration.length(), '0').append(configuration));
        }

        return 0;
    }
} // namespace n

#endif
