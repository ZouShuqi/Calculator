##########
# 小组成员：季宇成、孔保元、胡锦杰、余澳
# 程序说明: 测试函数
##########

import math
# from asin import asin
# from atan import atan
# from arctan import arctan
# from cos import cos
# from sin import sin
# from tan import tan

import os
from tkinter import *
from functools import partial
from button import *

import ctypes
# 加载 dll
dll = ctypes.CDLL("./fun.dll")  # dll 文件的路径

# 设置 dll 函数的参数类型和返回类型
dll.sin_approx_degrees.argtypes = [ctypes.c_double, ctypes.c_int]
dll.sin_approx_degrees.restype = ctypes.c_double

dll.cos_approx_degrees.argtypes = [ctypes.c_double, ctypes.c_int]
dll.cos_approx_degrees.restype = ctypes.c_double

dll.tan_approx.argtypes = [ctypes.c_double, ctypes.c_int]
dll.tan_approx.restype = ctypes.c_double

dll.arcsin_approx.argtypes = [ctypes.c_double, ctypes.c_double]
dll.arcsin_approx.restype = ctypes.c_double

dll.arccos_approx.argtypes = [ctypes.c_double, ctypes.c_double]
dll.arccos_approx.restype = ctypes.c_double

dll.arctan_approx.argtypes = [ctypes.c_double, ctypes.c_double]
dll.arctan_approx.restype = ctypes.c_double

def sin(x):
    return dll.sin_approx_degrees(x, 10)
def cos(x):
    return dll.cos_approx_degrees(x, 10)
def tan(x):
    return dll.tan_approx(x, 10)
def asin(x):
    return dll.arccos_approx(x, 0.01)
def acos(x):
    return dll.arccos_approx(x, 0.01)
def atan(x):
    return dll.arctan_approx(x, 0.01)

###  测试部分，显示误差大小，以及math库中计算的结果和自己的结果
def test_sin(x):
    math_sin_value = math.sin(math.radians(x))

    custom_sin_value = sin(x)
    # 计算两者之间的误差
    err = abs(math_sin_value - custom_sin_value)
    print('sin功能两者误差(值)为err=', err)
    print('Python中math.sin(%d)=%f' % (x, math_sin_value))
    print('自己实现的sin(%d)=%f' % (x, custom_sin_value))

def test_cos(x):
    math_cos_value = math.cos(math.radians(x))

    custom_cos_value = cos(x)
    # 计算两者之间的误差
    err = abs(math_cos_value - custom_cos_value)
    print('cos功能两者误差(值)为err=', err)
    print('Python中math.cos(%d)=%f' % (x, math_cos_value))
    print('自己实现的cos(%d)=%f' % (x, custom_cos_value))

def test_tan(x):
    math_tan_value = math.tan(math.radians(x))

    custom_tan_value = tan(x)
    # 计算两者之间的误差
    err = abs(math_tan_value - custom_tan_value)
    print('tan功能两者误差(值)为err=', err)
    print('Python中math.tan(%d)=%f' % (x, math_tan_value))
    print('自己实现的tan(%d)=%f' % (x, custom_tan_value))

def test_arcsin(x):
    math_asin_value = math.degrees(math.asin(x))

    custom_asin_value = asin(x)
    # 计算两者之间的误差
    err = abs(math_asin_value - custom_asin_value)
    print('arcsin功能两者误差(值)为err=', err)
    print('Python中math.asin(%d)=%f' % (x, math_asin_value))
    print('自己实现的asin(%d)=%f' % (x, custom_asin_value))

def test_arccos(x):
    math_acos_value = math.degrees(math.acos(x) )

    custom_acos_value = acos(x)
    # 计算两者之间的误差
    err = abs(math_acos_value - custom_acos_value)
    print('arccos功能两者误差(值)为err=', err)
    print('Python中math.acos(%d)=%f' % (x, math_acos_value))
    print('自己实现的acos(%d)=%f' % (x, custom_acos_value))

def test_arctan(x):
    math_atan_value = math.degrees(math.atan(x))

    custom_atan_value = atan(x)
    # 计算两者之间的误差
    err = abs(math_atan_value - custom_atan_value)
    print('arctan功能两者误差(值)为err=', err)
    print('Python中math.atan(%d)=%f' % (x, math_atan_value))
    print('自己实现的atan(%d)=%f' % (x, custom_atan_value))

if __name__ == '__main__':
    print("测试30°的sin、cos、tan值：")
    test_sin(30)
    test_cos(30)
    test_tan(30)
    print("\n测试45°的sin、cos、tan值：")
    test_sin(45)
    test_cos(45)
    test_tan(45)

    print("\n测试0.5的arcsin")
    test_arcsin(0.5)

    print("\n测试0.75的arcsin")
    test_arcsin(0.75)

    print("\n测试0.5的arccos")
    test_arccos(0.5)

    print("\n测试0.75的arccos")
    test_arccos(0.75)

    print("\n测试1的arctan值：")
    test_arctan(1)

    print("\n测试5的arctan值：")
    test_arctan(5)
    # while True:
    #     x=input("请输入测试函数(如格式：sin、cos、arcsin、arctan）:")
    #     if x=='sin':
    #         y=float(input("请按要求输入数字："))
    #         test_sin(y)
    #         z=input("continue?(y/n):")
    #         if z=='n'or z=='N':  # 即使条件是 z == 'n' or 'N'，它也会被解释为真
    #             break
    #     elif x=='cos':
    #         y=float(input("请按要求输入数字："))
    #         test_cos(y)
    #         z=input("continue?(y/n):")
    #         if z=='n'or z=='N':
    #             break
    #     elif x=='arcsin':
    #         y=float(input("请按要求输入数字："))
    #         test_arcsin(y)
    #         z=input("continue?(y/n):")
    #         if z=='n'or z=='N':
    #             break
    #
    #     elif x=='arctan':
    #         y = float(input("请按要求输入数字："))
    #         test_arctan(y)
    #         z = input("continue?(y/n):")
    #         if z == 'n' or z == 'N':
    #             break