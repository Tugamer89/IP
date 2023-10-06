#include <iostream>

int main() {
    char a, b;

    std::cout << "Inserire due caratteri: ";
    std::cin >> a >> b;

    std::cout << "Prima dello scambio: a='" << a << "' b='" << b << "'\n";

    char c = a;
    a = b;
    b = c;

    std::cout << "Dopo lo scambio: a='" << a << "' b='" << b << "'\n";

    return 0;
}
