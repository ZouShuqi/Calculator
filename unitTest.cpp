/*
 * @Description: ���ñ�׼���������Ǻ������м�� ��Դ�ļ� 
 * @Author: ���׻� 
 * @Date: 2024-04-11 10:26:39
 * @LastEditTime: 2024-04-12 11:50:19
 */
#include "fun.h" 
#include "unitTest.h"

int main()
{
	printf("��sin�������м�⡣\n");
	sinUnitTest(sin_approx_degrees);
	printf("��cos�������м�⡣\n");
	cosUnitTest(cos_approx_degrees);
	printf("��tan�������м�⡣\n");
	tanUnitTest(tan_approx);
	printf("��arcsin�������м�⡣\n");
	arcsinUnitTest(arcsin_approx);
	printf("��arccos�������м�⡣\n");
	arccosUnitTest(arccos_approx);
	printf("��arctan�������м�⡣\n");
	arctanUnitTest(arctan_approx);
	
	return 0;
}
