#pragma once

int functionWithoutBranch(int a) {
    std::cout << "Get input value: " << a << std::endl;
    // increase input value
    a++;
    return a;
}

int functionWithSingleIfBranch(int a) {
    std::cout << "Get input value: " << a << std::endl;
    // increase input value if positive
    if (a > 0) {
        a++;
    }
    return a;
}


