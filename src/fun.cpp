/*
 * 文件名: fun.cpp
 * 作者: 邹术琦
 * 创建日期: 2024-04-09 12:15:25
 * 更新日期：2024-04-12 22:34:25
 * 描述: 这个文件包含了通过泰勒展开和二分查找方法得到的近似三角函数的函数（sin、cos、tan、arcsin、arccos、arctan）。
 */


#include "fun.h"

/**
 * @description: 计算x的n次幂
 * @param {double} x: 底数
 * @param {int} n: 幂次
 * @return {double} result: 结果值
 */
double power(double x, int n)
{
    double result = 1.0;
    for (int i = 0; i < n; ++i)
    {
        result *= x;
    }
    return result;
}

/**
 * @description: 计算n的阶乘
 * @param {int} n: 阶乘的基数
 * @return {double} result: 阶乘结果
 */
double factorial(int n)
{
    double result = 1.0;
    for (int i = 2; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

/**
 * @description: 使用泰勒级数近似计算sin函数的值
 * @param {double} degrees: 角度数
 * @param {int} terms: 泰勒级数的项数，默认为10
 * @return {double} sum: 得到近似的sin值
 */
double sin_approx_degrees(double degrees, int terms )
{
    double radians = degrees * (PI / 180.0);
    double sum = 0.0;
    while ((radians < (-PI)) || (radians > PI))
    {
        if (radians < (-PI)) radians += 2 * PI;
        else  radians -= 2 * PI;
    }
    if ((radians > (-PI / 2)) && (radians < (PI / 2)))
    {
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
    else if (radians <= (-PI / 2))
    {
        return -cos_approx_degrees((radians + (PI / 2), terms) * (180.0 / PI), terms);
    }
    else
    {
        return cos_approx_degrees((radians - (PI / 2), terms) * (180.0 / PI), terms);
    }
}

/**
 * @description: 使用泰勒级数近似计算cos函数的值
 * @param {double} degrees: 角度数
 * @param {int} terms: 泰勒级数的项数，默认为10
 * @return {double} sum: 得到近似的cos值
 */
double cos_approx_degrees(double degrees, int terms )
{
    double radians = degrees * (PI / 180.0);
    double sum = 1.0; // cos的第一项是1
    while ((radians < (-PI)) || (radians > PI))
    {
        if (radians < (-PI)) radians += 2 * PI;
        else  radians -= 2 * PI;
    }
    if ((radians > (-PI / 2)) && (radians < (PI / 2)))
    {
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
    else if (radians <= (-PI / 2))
    {
        return sin_approx_degrees((radians + (PI / 2), terms) * (180.0 / PI), terms);
    }
    else
    {
        return -sin_approx_degrees((radians - (PI / 2), terms) * (180.0 / PI), terms);
    }

}

/**
 * @description: 使用tan(x) = sin(x) / cos(x)计算tan函数的值
 * @param {double} degrees: 角度
 * @param {int} terms: 泰勒级数的项数，默认为10
 * @return {double} result: 得到近似的tan值
 */
double tan_approx(double degrees, int terms)
{
    return sin_approx_degrees(degrees, terms) / cos_approx_degrees(degrees, terms);
}

/**
 * @description: 使用二分查找方法近似计算arcsin的值
 * @param {double} value: arcsin的输入值
 * @param {double} accuracy: 计算精度，也是精度阈值，默认为1e-6
 * @return {double} mid: 得到近似的arcsin值
 */
double arcsin_approx(double value, double accuracy ) {
    double mid = 0;
    double low = -90;
    double high = 90;
    while (high - low > accuracy) 
    {
        mid = (low + high) / 2;
        if (sin_approx_degrees(mid, terms) < value)
            low = mid;
        else
            high = mid;
    }
    return mid;
}

/**
 * @description: 使用二分查找方法近似计算arccos的值
 * @param {double} value: arccos的输入值
 * @param {double} accuracy: 计算精度，也是精度阈值，默认为1e-6
 * @return {double} mid: 得到近似的arccos值
 */
double arccos_approx(double value, double accuracy ) {
    double mid = 0;
    double low = 0;
    double high = 360;
    while (high - low > accuracy) // 精度阈值
    {
        mid = (low + high) / 2;
        if (cos_approx_degrees(mid, terms) > value)
            low = mid;
        else
            high = mid;
    }
    return mid;
}

/**
 * @description: 使用二分查找方法近似计算arctan的值
 * @param {double} value: arctan的输入值
 * @param {double} accuracy: 计算精度，也是精度阈值，默认为1e-6
 * @return {double} mid: 近似的arctan值
 */
double arctan_approx(double value, double accuracy)
{
    double low = -90;
    double high = 90;
    double mid, tan_mid;
    while (high - low > accuracy) 
    {
        mid = (low + high) / 2;
        tan_mid = tan_approx(mid, terms);

        if (tan_mid < value)
        {
            low = mid;
        }
        else 
        {
            high = mid;
        }
    }
    return mid;
}


//放在主函数测试
/*
#include <iostream>
#include "fun.h"
int main()
{
    std::cout << "sin_approx_degrees："  << sin_approx_degrees(390, terms) << std::endl;
    std::cout << "cos_approx_degrees：" << cos_approx_degrees(420, terms) << std::endl;

    std::cout << "arcsin_approx_degrees："  << arcsin_approx(0.9, accuracy) << std::endl;
    std::cout << "arccos_approx_degrees：" << arccos_approx(0.5, accuracy) << std::endl;

    std::cout << "arctan_approx_degrees："  << arctan_approx(0.71767346, accuracy) << std::endl;
    return 0;
}
*/

