#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <variant>
#include <option>
#include <tuple>
#include <format>

enum class OrderType
{
    GoodTillCancel,
    FillAndKill
};

enum class Side
{
    Buy,
    Sell
};

int main {
    std::cout << "Hello World" << std::endl;
    return 0;
}