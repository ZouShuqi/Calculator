第十组做的gui界面
采用原理为将原16小组的c++三角函数文件打包为dll动态库文件，文件名为fun.dll
在用python的ctypes库调用

button.py和constants.py为gui中按钮等控件的设置和常数
calculator为gui代码
运行main.py即可

计算器：
运行main文件，可以通过UI界面实现计算器计算功能

测试：
1.运行ProjectTest文件
运行ProjectTest文件，对函数sin、cos、arcsin、arctan进行测试
其中，输出结果 err 为math库函数和项目实现的三角函数之间的误差
并且，输出结果分别列出了math库函数和项目实现的三角函数计算的结果

2.在计算器界面输入“123+”，再按“=”，python终端显示测试过程和结果

分工说明：
胡锦杰与孔保元负责源程序三角函数的封装测试，用python语言创建UI界面
季宇成与余澳负责源程序测试函数的封装测试，用python语言编写新的测试程序
