##########
# 小组成员：季宇成、孔保元、胡锦杰、余澳
# 程序说明：定义各种按键类
##########

from abc import ABC
import tkinter as tk
from tkinter import font as font
from constants import *

class MyButton(ABC):

    def __init__(self, key, loc, func):
        """
        按钮对象的构造函数。 按钮具有颜色、大小（高度、宽度）、
        字体大小和颜色、按钮（键）上的文本、
        按钮和屏幕上的位置 (x,y)
        """
        self.color = "black"
        self.height = None  # 按钮的高度
        self.width = None  # 按钮的宽度
        self.f_size = None  # 按钮上文本的字体大小
        self.font_color = B_FG  # 按钮上文本的字体颜色，默认为B_FG，这是一个在constants模块中定义的常量
        self.key = key
        self.func = func  # 当按钮被点击时执行的函数
        self.x = loc[0]  # 按钮在屏幕上的位置
        self.y = loc[1]

    def create(self, screen):
        """
        在给定的屏幕上创建并放置按钮
        """
        button_font = font.Font(family=FONT, size=self.f_size, weight=font.BOLD)
        button = tk.Button(screen, text=self.key, command=self.func, bg=self.color,
                           fg=self.font_color, font=button_font)
        button.pack()
        button.place(height=self.height, width=self.width, x=self.x, y=self.y)


class StandardButton(MyButton):

    def __init__(self, key, loc, func):
        super().__init__(key, loc, func)
        self.f_size = B1_SIZE  # 字体大小，设置为B1_SIZE
        self.color = B1_COLOR  # 按钮的背景颜色，设置为B1_COLOR
        self.height = B1_HEIGHT  # 按钮的高度和宽度
        self.width = B1_WIDTH


class EqualsButton(StandardButton):
    # 等号按钮
    def __init__(self, key, loc, func):
        super().__init__(key, loc, func)
        self.width = B3_WIDTH


class ResetButtons(StandardButton):
    """
    B4 型按钮
    此类表示“AC”和“DEL”按钮
    """

    def __init__(self, key, loc, func):
        super().__init__(key, loc, func)
        self.color = B4_COLOR
        self.font_color = B4_FG


class ExtraButton(MyButton):
    # B2 型按钮。 这个类代表了上半部分的按钮计算器
    def __init__(self, key, loc, func):
        super().__init__(key, loc, func)
        self.f_size = B2_SIZE
        self.color = B2_COLOR
        self.height = B2_HEIGHT
        self.width = B2_WIDTH


class ArrowButton(ExtraButton):
    def __init__(self, key, loc, func):
        # B5 型按钮。 此类表示箭头键
        super().__init__(key, loc, func)
        self.color = B5_COLOR
