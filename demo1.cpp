#include <iostream>
#include <cmath>
using namespace std;

// main() 是程序开始执行的地方

int main()
{
    double xiebian = 52;
    double sin_result = xiebian * sin(20); // 计算正弦值
    double cos_result = xiebian * cos(20); // 计算余弦值

    wcout << sin_result << endl << cos_result << endl;

    return 0;
}