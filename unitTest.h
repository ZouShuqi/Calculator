/*
 * @Description: 利用标准函数对三角函数进行检测 ，头文件 
 * @Author: 杜伦基 
 * @Date: 2024-04-11 10:26:39
 * @LastEditTime: 2024-04-12 11:50:19
 */

#ifndef UNITTEST_H
#define UNITTEST_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI_TEST 3.14159265358979323846
 
/**
 * @description:  对sin函数进行检测 
 * @param {double*(p)} p: 待检测的sin函数的函数指针 
 * @param {int} maxTestLimit: 最大测试次数 
 * @param {double} minResolusion: 函数输出值与实际值最小可容忍范围 
 * @return {bool} output: 返回检测的结果，true为通过，false为不通过 
 */
bool sinUnitTest(double (*p)(double, int), int maxTestLimit = 360 ,double minResolusion = 0.0001) 
 {
	int errorCount = 0;
	double tempNum;
	
	tempNum = 0;
	if((*p)(tempNum,10) - sin(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, sin(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	tempNum = 90;
	if((*p)(tempNum,10) - sin(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, sin(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	tempNum = 180;
	if((*p)(tempNum,10) - sin(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, sin(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	srand(1);
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*360 - 180;
		if((*p)(tempNum,10) - sin(tempNum * (PI_TEST / 180.0)) > minResolusion)
		{
			errorCount++;
			printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, sin(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
		}
	}
	if(errorCount == 0)
	{
		printf("sin函数测试通过。\n");
		return true;
	}
	else
	{
		printf("sin函数测试不通过，准确率为%f。\n", (double)errorCount/((double)maxTestLimit)+3); 
		return false;
	}
 }
 
 /**
 * @description:  对cos函数进行检测 
 * @param {double*(p)} p: 待检测的cos函数的函数指针 
 * @param {int} maxTestLimit: 最大测试次数 
 * @param {double} minResolusion: 函数输出值与实际值最小可容忍范围 
 * @return {bool} output: 返回检测的结果，true为通过，false为不通过 
 */
bool cosUnitTest(double (*p)(double, int), int maxTestLimit = 360 ,double minResolusion = 0.0001) 
 {
	int errorCount = 0;
	double tempNum;
	
	srand(1);
	tempNum = 0;
	if((*p)(tempNum,10) - cos(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, cos(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	tempNum = 90;
	if((*p)(tempNum,10) - cos(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, cos(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	tempNum = 180;
	if((*p)(tempNum,10) - cos(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, cos(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*360 - 180;
		if((*p)(tempNum,10) - cos(tempNum * (PI_TEST / 180.0)) > minResolusion)
		{
			errorCount++;
			printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, cos(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
		}
	}
	if(errorCount == 0)
	{
		printf("cos函数测试通过。\n");
		return true;
	}
	else
	{
		printf("cos函数测试不通过，准确率为%f。\n", (double)errorCount/((double)maxTestLimit)+3); 
		return false;
	}
 }
 
/**
 * @description:  对tan函数进行检测 
 * @param {double*(p)} p: 待检测的tan函数的函数指针 
 * @param {int} maxTestLimit: 最大测试次数 
 * @param {double} minResolusion: 函数输出值与实际值最小可容忍范围 
 * @return {bool} output: 返回检测的结果，true为通过，false为不通过 
 */
bool tanUnitTest(double (*p)(double, int), int maxTestLimit = 360 ,double minResolusion = 0.0001) 
 {
	int errorCount = 0;
	double tempNum;
	
	tempNum = 0;
	if((*p)(tempNum,10) - tan(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, tan(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	srand(1);
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*180 - 90;
		if((*p)(tempNum,10) - tan(tempNum * (PI_TEST / 180.0)) > minResolusion)
		{
			errorCount++;
			printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, tan(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
		}
	}
	if(errorCount == 0)
	{
		printf("tan函数测试通过。\n");
		return true;
	}
	else
	{
		printf("tan函数测试不通过，准确率为%f。\n", (double)errorCount/((double)maxTestLimit)+1); 
		return false;
	}
 }
 
 /**
 * @description:  对arcsin函数进行检测 
 * @param {double*(p)} p: 待检测的arcsin函数的函数指针 
 * @param {int} maxTestLimit: 最大测试次数 
 * @param {double} minResolusion: 函数输出值与实际值最小可容忍范围 
 * @return {bool} output: 返回检测的结果，true为通过，false为不通过 
 */
bool arcsinUnitTest(double (*p)(double, double), int maxTestLimit = 360 ,double minResolusion = 0.0001) 
 {
	int errorCount = 0;
	double tempNum;
	
	tempNum = 0;
	if((*p)(tempNum,1e-6) - asin(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, asin(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	tempNum = -1;
	if((*p)(tempNum,1e-6) - asin(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, asin(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	tempNum = 1;
	if((*p)(tempNum,1e-6) - asin(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, asin(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	srand(1);
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*2 - 1;
		if((*p)(tempNum,1e-6) - asin(tempNum) / (PI_TEST / 180.0) > minResolusion)
		{
			errorCount++;
			printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, asin(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
		}
	}
	if(errorCount == 0)
	{
		printf("arcsin函数测试通过。\n");
		return true;
	}
	else
	{
		printf("arcsin函数测试不通过，准确率为%f。\n", (double)errorCount/((double)maxTestLimit)+3); 
		return false;
	}
 }
 
 /**
 * @description:  对arccos函数进行检测 
 * @param {double*(p)} p: 待检测的arccos函数的函数指针 
 * @param {int} maxTestLimit: 最大测试次数 
 * @param {double} minResolusion: 函数输出值与实际值最小可容忍范围 
 * @return {bool} output: 返回检测的结果，true为通过，false为不通过 
 */
bool arccosUnitTest(double (*p)(double, double), int maxTestLimit = 360 ,double minResolusion = 0.0001) 
 {
	int errorCount = 0;
	double tempNum;
	
	tempNum = 0;
	if((*p)(tempNum,1e-6) - acos(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, acos(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	tempNum = -1;
	if((*p)(tempNum,1e-6) - acos(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, acos(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	tempNum = 1;
	if((*p)(tempNum,1e-6) - acos(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, acos(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	srand(1);
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*2 - 1;
		if((*p)(tempNum,1e-6) - acos(tempNum) / (PI_TEST / 180.0) > minResolusion)
		{
			errorCount++;
			printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, acos(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
		}
	}
	if(errorCount == 0)
	{
		printf("arccos函数测试通过。\n");
		return true;
	}
	else
	{
		printf("arccos函数测试不通过，准确率为%f。\n", (double)errorCount/((double)maxTestLimit)+3); 
		return false;
	}
 }

/**
 * @description:  对arctan函数进行检测 
 * @param {double*(p)} p: 待检测的arctan函数的函数指针 
 * @param {int} maxTestLimit: 最大测试次数 
 * @param {double} minResolusion: 函数输出值与实际值最小可容忍范围 
 * @return {bool} output: 返回检测的结果，true为通过，false为不通过 
 */
bool arctanUnitTest(double (*p)(double, double), int maxTestLimit = 360 ,double minResolusion = 0.0001) 
 {
	int errorCount = 0;
	double tempNum;
	
	tempNum = 0;
	if((*p)(tempNum,1e-6) - atan(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, atan(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	srand(1);
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*20000 - 10000;
		if((*p)(tempNum,1e-6) - atan(tempNum) / (PI_TEST / 180.0) > minResolusion)
		{
			errorCount++;
			printf("测试数据%f出错，应为%f，函数实际输出为%f。\n", tempNum, atan(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
		}
	}
	if(errorCount == 0)
	{
		printf("arctan函数测试通过。\n");
		return true;
	}
	else
	{
		printf("arctan函数测试不通过，准确率为%f。\n", (double)errorCount/((double)maxTestLimit)+1); 
		return false;
	}
 }
#endif //UNITTEST.H
