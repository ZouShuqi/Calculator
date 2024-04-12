/*
 * @Description: 利用标准函数对三角函数进行检测 ，源文件 
 * @Author: 杜伦基 
 * @Date: 2024-04-11 10:26:39
 * @LastEditTime: 2024-04-12 11:50:19
 */
#include "fun.h" 
#include "unitTest.h"

int main()
{
	printf("对sin函数进行检测。\n");
	sinUnitTest(sin_approx_degrees);
	printf("对cos函数进行检测。\n");
	cosUnitTest(cos_approx_degrees);
	printf("对tan函数进行检测。\n");
	tanUnitTest(tan_approx);
	printf("对arcsin函数进行检测。\n");
	arcsinUnitTest(arcsin_approx);
	printf("对arccos函数进行检测。\n");
	arccosUnitTest(arccos_approx);
	printf("对arctan函数进行检测。\n");
	arctanUnitTest(arctan_approx);
	
	return 0;
}
