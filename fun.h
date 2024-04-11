#ifndef FUN_H
#define FUN_H
/*
 * 文件名: fun.cpp
 * 作者: 邹术琦
 * 创建日期: 2024-04-09 12:15:25
 * 更新日期：2024-04-11 22:19:47
 * 描述: 这个文件包含了通过泰勒展开和二分查找方法得到的近似三角函数的函数的声明（sin、cos、tan、arcsin、arccos、arctan），包含了泰勒展开的项数和精度阈值设置。
 */

#include <iostream>

const double PI = 3.14159265358979323846;
const int terms = 40;
const double accuracy = 1e-12;



double power(double x, int n);
double factorial(int n);
double sin_approx_degrees(double degrees, int terms);
double cos_approx_degrees(double degrees, int terms );
double tan_approx(double degrees, int terms);
double arcsin_approx(double value, double accuracy);
double arccos_approx(double value, double accuracy);
double arctan_approx(double value, double accuracy);

#endif // FUN.H