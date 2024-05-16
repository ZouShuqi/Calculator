##########
# 小组成员：季宇成、孔保元、胡锦杰、余澳
# 程序说明: 定义了程序中所用到的常量。
##########

TITLE = "CQU-Calculator"
INIT_ANS = ""
MAX_CHARS_NUM = 12
CURSOR_BLINK = 450

# 箭头及光标：
DIS_SEP = "|"
EXP_SEP = ""
L_ARR = "◄"
R_ARR = "►"
R = 1
L = -1

# Error类型：
SYNTAX_ERROR = "Syntax ERROR"
MATH_ERROR = "Math ERROR"
STACK_ERROR = "Stack ERROR"

# 屏幕属性：
S_COLOR = "gray19"
S_HEIGHT = 550
S_WIDTH = 330
SCREEN_SIZE = str(S_WIDTH) + "x" + str(S_HEIGHT)

# 键的字体：
FONT = 'Helvetica'

# 名称标签：
NAME_LOC = (60, 20)   # 第一个值表示标签距离屏幕左侧的距离，单位是像素；第二个值表示标签距离屏幕顶部的距离
NAME_SIZE = (20, 200) # 定义了名称标签的大小
NAME_FG = "red"
NAME_T = "现代软件工程(春)"
NAME_S = 15           # 定义了名称标签文本的字体大小

# Company label
COMP_LOC = (10, 170)
COMP_SIZE = (25, 300)
COMP_FG = "white"
COMP_T = "CQU: JYC、KBY、HJJ、YA"
COMP_S = 15

# Display banner properties:
DISPLAY_Y = 60
DISPLAY_X = 8
DISPLAY_W = 314
DISPLAY_H = 65
DISPLAY_FG = "midnight blue"
DISPLAY_BG = "ivory3"
BORDER_SIZE = 3
D_F_SIZE = 25

# BUTTONS
# Buttons properties:
B_FG = "black"
# Gaps between buttons:
HEIGHT_GAP = 10
WIDTH_GAP = 5
# The text on keys:
# Special functions
SIN = "sin"
COS = "cos"
# TAN = "tan"
ASIN = "asin"
# ACOS = "acos"
ATAN = "atan"
# SQRT = "√"
# Arithmetic operands
POW = "xⁿ"
POW_3 = "x³"
POW_2 = "x²"
DIVIDE = "÷"
MUL = "×"
L_CEIL = "⌈"
R_CEIL = "⌉"
R_FLOOR = "⌋"
L_FLOOR = "⌊"
# Special keys:
TEST = "TEST"
AC = "AC"
DEL = "DEL"
ANS = "Ans"
EQUALS = "="
# Basic keys
NINE = "9"
EIGHT = "8"
SEVEN = "7"
SIX = "6"
FIVE = "5"
FOUR = "4"
THREE = "3"
TWO = "2"
ONE = "1"
ZERO = "0"
DOT = "."
L_PAR = "("
R_PAR = ")"
MINUS = "-"
PLUS = "+"
# The actual expression to execute:
# Special functions
OP_SIN = "sin("
OP_COS = "cos("
OP_ASIN = "asin("
OP_ATAN = "atan("
OP_SQRT = "sqrt("
# Arithmetic operands:
OP_POW = "**"
OP_POW_3 = "**3"
OP_POW_2 = "**2"
OP_DIVIDE = "/"
OP_MUL = "*"
OP_R_CEIL = ")"
OP_L_CEIL = "math.ceil("
OP_R_FLOOR = ")"
OP_L_FLOOR = "math.floor("
# The key's text on the display banner:
POW_DIS = "^"
POW_3_DIS = "³"
POW_2_DIS = "²"

# Button types:
# Big buttons:
B1 = 0
B1_SIZE = 18
B1_COLOR = "peru"
B1_HEIGHT = 40
B1_WIDTH = 60
# Small buttons:
B2 = 1
B2_SIZE = 13
# B2_COLOR = "gray19"
B2_COLOR = "peru"
B2_HEIGHT = 30
B2_WIDTH = 48
# Equals button:
B3 = 2
B3_WIDTH = B1_WIDTH * 2 + WIDTH_GAP
# AC and DEL buttons:
B4 = 3
B4_COLOR = "peru"
B4_FG = "black"
# Arrow buttons:
B5 = 4
B5_COLOR = "midnight blue"
