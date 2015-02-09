#ifndef PERMUTE_PERMUTE_HPP
#define PERMUTE_PERMUTE_HPP

#include <cmath>
#include <string>
#include "../base-conversion/base_conversion.hpp"

namespace n {
    void permute(int n, int k, void (*f)(const std::string &)) {
        int numPermutations = pow(k, n);
        std::string configuration;

        for (int i = 0; i < numPermutations; i++) {
            configuration = convert_base(i, 10, k);
            (*f)(std::string(n - configuration.length(), '0').append(configuration));
        }
    }
} // namespace n

#endif
