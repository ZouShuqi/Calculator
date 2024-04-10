# Calculator
三角函数计算器，采用泰勒展开和二分法逼近三角函数，输出sin、cos、arcsin、arccos

步骤1：理解需求和目标
开发自定义的 sin、cos、arcsin、arccos 函数。
不使用C/C++标准数学库函数。
代码能在Visual Studio上编译和运行。

步骤2：设计方案
我们可以采用泰勒级数(Taylor Series)来实现 sin 和 cos 函数，而反三角函数（arcsin 和 arccos）可以通过二分法实现。
泰勒级数是一种用多项式逼近复杂函数的方法，适用于本场景。
arcsin函数:可以使用二分查找方法，在[-1,1]的范围内查找一个数x，使得sinx尽可能接近给定的输入值。因为sinx在[-Π/2，Π/2]是单调递增的，所以可以用二分查找来逼近求解。 arccos函数同理。
