#include<iostream>

int main() {

    bool a = false;
    bool b = true;

    bool res1 = a && a;
    bool res2 = a && b;
    bool res3 = b && a;
    bool res4 = b && b;

    std::cout << "oprator &&" << std::endl;
    std::cout << a << " " << a << " " << res1 << std::endl;
    std::cout << a << " " << b << " " << res2 << std::endl;
    std::cout << b << " " << a << " " << res3 << std::endl;
    std::cout << b << " " << b << " " << res4 << std::endl;
    std::cout << '\t' << std::endl;

    bool ans1 = a || a;
    bool ans2 = a || b;
    bool ans3 = b || a;
    bool ans4 = b || b;

    std::cout << "oprator ||" << std::endl;
    std::cout << a << " " << a << " " << res1 << std::endl;
    std::cout << a << " " << b << " " << res2 << std::endl;
    std::cout << b << " " << a << " " << res3 << std::endl;
    std::cout << b << " " << a << " " << res4 << std::endl;

}