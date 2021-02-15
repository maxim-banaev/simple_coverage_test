#pragma once

int functionWithoutBranch(int a) {
    std::cout << "Get input value: " << a << std::endl;
    // increase input value
    a++;
    return a;
}

int functionWithIfBranch(int a) {
    std::cout << "Get input value: " << a << std::endl;
    // increase input value if positive
    if (a > 0) {
        a++;
    }
    return a;
}

int functionWithIfElseBranch(int a) {
    std::cout << "Get input value: " << a << std::endl;
    // increase input value if positive
    if (a > 0) {
        a++;
    } else {
        a--;
    }
    return a;
}

int functionWithDoubleIfBranch(int a) {
    std::cout << "Get input value: " << a << std::endl;
    // increase input value if positive
    if (a > 0) {
        a++;
    }
    if (a < 0) {
        a--;
    }
    return a;
}

int functionWithCaseBranch(int a) {
    std::cout << "Get input value: " << a << std::endl;
    switch (a) {
        case 1:
            a *=10;
            break;
        default:
            a = 0;
            break;
    }
    return a;
}


