/*
 * @Description: ���ñ�׼���������Ǻ������м�� ��ͷ�ļ� 
 * @Author: ���׻� 
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
 * @description:  ��sin�������м�� 
 * @param {double*(p)} p: ������sin�����ĺ���ָ�� 
 * @param {int} maxTestLimit: �����Դ��� 
 * @param {double} minResolusion: �������ֵ��ʵ��ֵ��С�����̷�Χ 
 * @return {bool} output: ���ؼ��Ľ����trueΪͨ����falseΪ��ͨ�� 
 */
bool sinUnitTest(double (*p)(double, int), int maxTestLimit = 360 ,double minResolusion = 0.0001) 
 {
	int errorCount = 0;
	double tempNum;
	
	tempNum = 0;
	if((*p)(tempNum,10) - sin(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, sin(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	tempNum = 90;
	if((*p)(tempNum,10) - sin(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, sin(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	tempNum = 180;
	if((*p)(tempNum,10) - sin(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, sin(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	srand(1);
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*360 - 180;
		if((*p)(tempNum,10) - sin(tempNum * (PI_TEST / 180.0)) > minResolusion)
		{
			errorCount++;
			printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, sin(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
		}
	}
	if(errorCount == 0)
	{
		printf("sin��������ͨ����\n");
		return true;
	}
	else
	{
		printf("sin�������Բ�ͨ����׼ȷ��Ϊ%f��\n", (double)errorCount/((double)maxTestLimit)+3); 
		return false;
	}
 }
 
 /**
 * @description:  ��cos�������м�� 
 * @param {double*(p)} p: ������cos�����ĺ���ָ�� 
 * @param {int} maxTestLimit: �����Դ��� 
 * @param {double} minResolusion: �������ֵ��ʵ��ֵ��С�����̷�Χ 
 * @return {bool} output: ���ؼ��Ľ����trueΪͨ����falseΪ��ͨ�� 
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
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, cos(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	tempNum = 90;
	if((*p)(tempNum,10) - cos(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, cos(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	tempNum = 180;
	if((*p)(tempNum,10) - cos(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, cos(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*360 - 180;
		if((*p)(tempNum,10) - cos(tempNum * (PI_TEST / 180.0)) > minResolusion)
		{
			errorCount++;
			printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, cos(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
		}
	}
	if(errorCount == 0)
	{
		printf("cos��������ͨ����\n");
		return true;
	}
	else
	{
		printf("cos�������Բ�ͨ����׼ȷ��Ϊ%f��\n", (double)errorCount/((double)maxTestLimit)+3); 
		return false;
	}
 }
 
/**
 * @description:  ��tan�������м�� 
 * @param {double*(p)} p: ������tan�����ĺ���ָ�� 
 * @param {int} maxTestLimit: �����Դ��� 
 * @param {double} minResolusion: �������ֵ��ʵ��ֵ��С�����̷�Χ 
 * @return {bool} output: ���ؼ��Ľ����trueΪͨ����falseΪ��ͨ�� 
 */
bool tanUnitTest(double (*p)(double, int), int maxTestLimit = 360 ,double minResolusion = 0.0001) 
 {
	int errorCount = 0;
	double tempNum;
	
	tempNum = 0;
	if((*p)(tempNum,10) - tan(tempNum * (PI_TEST / 180.0)) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, tan(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
	}
	srand(1);
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*180 - 90;
		if((*p)(tempNum,10) - tan(tempNum * (PI_TEST / 180.0)) > minResolusion)
		{
			errorCount++;
			printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, tan(tempNum * (PI_TEST / 180.0)), (*p)(tempNum,10));
		}
	}
	if(errorCount == 0)
	{
		printf("tan��������ͨ����\n");
		return true;
	}
	else
	{
		printf("tan�������Բ�ͨ����׼ȷ��Ϊ%f��\n", (double)errorCount/((double)maxTestLimit)+1); 
		return false;
	}
 }
 
 /**
 * @description:  ��arcsin�������м�� 
 * @param {double*(p)} p: ������arcsin�����ĺ���ָ�� 
 * @param {int} maxTestLimit: �����Դ��� 
 * @param {double} minResolusion: �������ֵ��ʵ��ֵ��С�����̷�Χ 
 * @return {bool} output: ���ؼ��Ľ����trueΪͨ����falseΪ��ͨ�� 
 */
bool arcsinUnitTest(double (*p)(double, double), int maxTestLimit = 360 ,double minResolusion = 0.0001) 
 {
	int errorCount = 0;
	double tempNum;
	
	tempNum = 0;
	if((*p)(tempNum,1e-6) - asin(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, asin(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	tempNum = -1;
	if((*p)(tempNum,1e-6) - asin(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, asin(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	tempNum = 1;
	if((*p)(tempNum,1e-6) - asin(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, asin(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	srand(1);
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*2 - 1;
		if((*p)(tempNum,1e-6) - asin(tempNum) / (PI_TEST / 180.0) > minResolusion)
		{
			errorCount++;
			printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, asin(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
		}
	}
	if(errorCount == 0)
	{
		printf("arcsin��������ͨ����\n");
		return true;
	}
	else
	{
		printf("arcsin�������Բ�ͨ����׼ȷ��Ϊ%f��\n", (double)errorCount/((double)maxTestLimit)+3); 
		return false;
	}
 }
 
 /**
 * @description:  ��arccos�������м�� 
 * @param {double*(p)} p: ������arccos�����ĺ���ָ�� 
 * @param {int} maxTestLimit: �����Դ��� 
 * @param {double} minResolusion: �������ֵ��ʵ��ֵ��С�����̷�Χ 
 * @return {bool} output: ���ؼ��Ľ����trueΪͨ����falseΪ��ͨ�� 
 */
bool arccosUnitTest(double (*p)(double, double), int maxTestLimit = 360 ,double minResolusion = 0.0001) 
 {
	int errorCount = 0;
	double tempNum;
	
	tempNum = 0;
	if((*p)(tempNum,1e-6) - acos(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, acos(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	tempNum = -1;
	if((*p)(tempNum,1e-6) - acos(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, acos(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	tempNum = 1;
	if((*p)(tempNum,1e-6) - acos(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, acos(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	srand(1);
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*2 - 1;
		if((*p)(tempNum,1e-6) - acos(tempNum) / (PI_TEST / 180.0) > minResolusion)
		{
			errorCount++;
			printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, acos(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
		}
	}
	if(errorCount == 0)
	{
		printf("arccos��������ͨ����\n");
		return true;
	}
	else
	{
		printf("arccos�������Բ�ͨ����׼ȷ��Ϊ%f��\n", (double)errorCount/((double)maxTestLimit)+3); 
		return false;
	}
 }

/**
 * @description:  ��arctan�������м�� 
 * @param {double*(p)} p: ������arctan�����ĺ���ָ�� 
 * @param {int} maxTestLimit: �����Դ��� 
 * @param {double} minResolusion: �������ֵ��ʵ��ֵ��С�����̷�Χ 
 * @return {bool} output: ���ؼ��Ľ����trueΪͨ����falseΪ��ͨ�� 
 */
bool arctanUnitTest(double (*p)(double, double), int maxTestLimit = 360 ,double minResolusion = 0.0001) 
 {
	int errorCount = 0;
	double tempNum;
	
	tempNum = 0;
	if((*p)(tempNum,1e-6) - atan(tempNum) / (PI_TEST / 180.0) > minResolusion)
	{
		errorCount++;
		printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, atan(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
	}
	srand(1);
	for(int i = 0; i< maxTestLimit ; i++)
	{
		tempNum = (double)rand()/RAND_MAX*20000 - 10000;
		if((*p)(tempNum,1e-6) - atan(tempNum) / (PI_TEST / 180.0) > minResolusion)
		{
			errorCount++;
			printf("��������%f����ӦΪ%f������ʵ�����Ϊ%f��\n", tempNum, atan(tempNum) / (PI_TEST / 180.0), (*p)(tempNum,1e-6));
		}
	}
	if(errorCount == 0)
	{
		printf("arctan��������ͨ����\n");
		return true;
	}
	else
	{
		printf("arctan�������Բ�ͨ����׼ȷ��Ϊ%f��\n", (double)errorCount/((double)maxTestLimit)+1); 
		return false;
	}
 }
#endif //UNITTEST.H
