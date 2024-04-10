#include <iostream>

// 定义π的近似值
const double PI = 3.14159265358979323846;

// 计算x的n次幂
double power(double x, int n) 
{
    double result = 1.0;
    for (int i = 0; i < n; ++i) 
    {
        result *= x;
    }
    return result;
}

// 计算n的阶乘
double factorial(int n) 
{
    double result = 1.0;
    for (int i = 2; i <= n; ++i) 
    {
        result *= i;
    }
    return result;
}

// sin的泰勒级数近似，输入为度数，terms为泰克展开的项数
double sin_approx_degrees(double degrees, int terms = 10) 
{
    double radians = degrees * (PI / 180.0);
    double sum = 0.0;
    for (int n = 0; n < terms; ++n) 
    {
        double term = power(radians, 2 * n + 1) / factorial(2 * n + 1);
        if (n % 2 == 0) 
        {
            sum += term;
        }
        else 
        {
            sum -= term;
        }
    }
    return sum;
}

// cos的泰勒级数近似，输入为度数，terms为泰克展开的项数
double cos_approx_degrees(double degrees, int terms = 10) 
{
    double radians = degrees * (PI / 180.0);
    double sum = 1.0; // cos的第一项是1
    for (int n = 1; n < terms; ++n) 
    {
        double term = power(radians, 2 * n) / factorial(2 * n);
        if (n % 2 == 0) 
        {
            sum += term;
        }
        else 
        {
            sum -= term;
        }
    }
    return sum;
}


// 二分查找逼近 arcsin，accuracy为精确到第几位小数
double arcsin_approx(double value, double accuracy = 1e-6) {
    double mid=0;
    double low = -90;
    double high = 90;
    while (high - low > accuracy) // 精度阈值
    { 
        mid = (low + high) / 2;
        if (sin_approx_degrees(mid) < value)
            low = mid;
        else
            high = mid;
    }
    return mid;
}

// 二分查找逼近 arccos，accuracy为精确到第几位小数
double arccos_approx(double value,double accuracy = 1e-6) {
    double mid=0;
    double low = 0;
    double high = 360;
    while (high - low > accuracy) // 精度阈值
    { 
        mid = (low + high) / 2;
        if (cos_approx_degrees(mid) > value)
            low = mid;
        else
            high = mid;
    }
    return mid;
}


//放在主函数测试
/*
#include <iostream>
#include "fun.h"


int main() {
    double degrees = 30.0; // 测试值，以度数为单位
    int terms = 10; // 计算泰勒级数的项数
    double accuracy = 1e-6;
    std::cout << "sin_approx_degrees(" << degrees << " degrees) = " << sin_approx_degrees(degrees, terms) << std::endl;
    std::cout << "cos_approx_degrees(" << degrees << " degrees) = " << cos_approx_degrees(degrees*2, terms) << std::endl;

    std::cout << "arcsin_approx_degrees(" << degrees << " degrees) = " << arcsin_approx(0.9, accuracy) << std::endl;
    std::cout << "arccos_approx_degrees(" << degrees << " degrees) = " << arccos_approx(0.5, accuracy) << std::endl;
    retu
*/
