# Day 8：函数（Function）

## 一、知识点总结

### 知识点①：函数的概念
- 函数：将一段具有特定功能的代码封装起来，需要时可以调用。
- 函数通常定义在 main() 外面。
- main() 是程序入口。
- void 函数没有返回值。
- int 函数返回整数。

~~~cpp
#include <iostream>
using namespace std;

void printMessage() {
    cout << "我正在学习C++函数！" << endl;
}

int main() {
    cout << "程序开始" << endl;
    printMessage();
    cout << "程序结束" << endl;
    return 0;
}
~~~

运行结果：
~~~text
程序开始
我正在学习C++函数！
程序结束
~~~

易错点：定义函数不代表执行函数；void 不代表不能输出内容；函数定义不能直接嵌套在 main() 内部。

### 知识点②：形参和实参
- 形参：定义函数时括号中声明的变量。
- 实参：调用函数时传入的值或变量。
- 实参按照顺序传递给形参。

~~~cpp
void printNumber(int x) {
    cout << x << endl;
}

int main() {
    int a = 10;
    int b = 20;
    printNumber(a);
    printNumber(b);
    printNumber(30);
    return 0;
}
~~~

运行结果：
~~~text
10
20
30
~~~

易错点：x 是形参，a、b、30 是实参；形参和实参是不同的变量。

### 知识点③：函数返回值 return
- return 将结果返回给调用者。
- return 执行后，当前函数立即结束。
- 返回值可以用变量接收。

~~~cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 15;
    int y = 25;
    int result = add(x, y);
    cout << result << endl;
    return 0;
}
~~~

运行结果：40。

执行过程：a接收15，b接收25，计算15+25，return 40，result接收40。

易错点：cout 是输出，return 是返回；return 后面的代码不会继续执行。

### 知识点④：值传递
基本数据类型作为普通函数参数传递时，形参接收实参值的副本。修改形参不会直接修改外部实参。

~~~cpp
void addTen(int x) {
    x = x + 10;
    cout << "函数内部 x = " << x << endl;
}

int main() {
    int num = 5;
    cout << "调用前 num = " << num << endl;
    addTen(num);
    cout << "调用后 num = " << num << endl;
    return 0;
}
~~~

运行结果：
~~~text
调用前 num = 5
函数内部 x = 15
调用后 num = 5
~~~

易错点：num 和 x 是两个变量，修改 x 不会直接改变 num。

### 知识点⑤：变量作用域
- 全局变量：定义在所有函数外面，在可见范围内可以使用。
- 局部变量：定义在函数或代码块内部，只能在对应作用域内使用。
- 同名局部变量会隐藏全局变量。
- 局部变量离开作用域后销毁。

~~~cpp
#include <iostream>
using namespace std;

int num = 10;

void change() {
    int num = 20;
    num = num + 5;
    cout << num << endl;
}

int main() {
    cout << num << endl;
    change();
    cout << num << endl;
    return 0;
}
~~~

运行结果：
~~~text
10
25
10
~~~

易错点：同名不代表是同一个变量；修改局部变量不会自动修改全局变量。

### 知识点⑥：函数综合应用

~~~cpp
int bonus = 5;

int calculateScore(int score) {
    int total = score + bonus;

    if (total >= 60) {
        return total;
    } else {
        return 0;
    }
}

int main() {
    int score = 58;
    int result = calculateScore(score);

    cout << result << endl;
    cout << score << endl;
    return 0;
}
~~~

运行结果：
~~~text
63
58
~~~

执行过程：bonus=5，score=58，total=63，if条件成立，return 63，result接收63，外部score仍然是58。

## 二、函数进阶：多个函数配合

### 1. 函数嵌套调用

~~~cpp
int add(int a, int b) {
    return a + b;
}

int doubleNum(int x) {
    return x * 2;
}

int main() {
    int num = 5;
    int result = doubleNum(add(num, 3));
    cout << result << endl;
    return 0;
}
~~~

运行结果：16。

执行顺序：add(5,3)返回8，doubleNum(8)返回16，result接收16。

### 2. 同一个函数多次调用

~~~cpp
int calculate(int x) {
    if (x > 10) {
        return x + 5;
    } else {
        return x * 2;
    }
}

int main() {
    int a = 8;
    int result = calculate(a) + calculate(12);
    cout << result << endl;
    return 0;
}
~~~

运行结果：33。

第一次调用返回16，第二次调用返回17，最终result=33。每次调用都会重新创建自己的形参和局部变量。

## 三、二维数组与函数

### 1. 二维数组传参和求和

~~~cpp
int getSum(int arr[2][3]) {
    int sum = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum = sum + arr[i][j];
        }
    }

    return sum;
}
~~~

- i 控制行。
- j 控制列。
- 外层循环每执行一次，内层循环完整执行一次。
- 内层循环进入新的一行时，j重新从0开始。
- 函数通过数组参数访问传入数组中的元素。

### 2. 二维数组统计偶数

~~~cpp
int countEven(int arr[2][3]) {
    int count = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    return count;
}
~~~

- % 2 == 0：判断偶数。
- count++：满足条件时计数加1。
- return count：返回统计结果。

易错点：二维数组函数参数需要正确指定列数；sum用于累加，count用于计数。

## 四、Practice 编程练习记录

| 文件 | 练习内容 |
|---|---|
| practice46.cpp | void函数与函数调用 |
| practice47.cpp | 形参和实参 |
| practice48.cpp | 函数返回值 |
| practice49.cpp | 值传递 |
| practice50.cpp | 全局变量和局部变量 |
| practice51.cpp | 函数、if、return综合应用 |
| practice52.cpp | 二维数组、函数求和和偶数统计 |

### Practice52 完整代码

~~~cpp
#include <iostream>
using namespace std;

int getSum(int arr[2][3]) {
    int sum = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum = sum + arr[i][j];
        }
    }

    return sum;
}

int countEven(int arr[2][3]) {
    int count = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int arr[2][3] = {
        {7, 2, 9},
        {4, 6, 3}
    };

    int sumResult = getSum(arr);
    int evenCount = countEven(arr);

    cout << "数组总和 = " << sumResult << endl;
    cout << "偶数个数 = " << evenCount << endl;

    return 0;
}
~~~

运行结果：
~~~text
数组总和 = 31
偶数个数 = 3
~~~

## 五、Day 8 易错点总复习

1. 函数定义和函数调用是两回事。
2. void函数不返回数值，但可以输出内容。
3. 形参和实参是不同的变量。
4. return执行后函数立即结束。
5. 值传递修改形参，不会直接修改外部实参。
6. 全局变量和局部变量的作用范围不同。
7. 同名局部变量会隐藏同名全局变量。
8. 每次函数调用都会创建自己的形参和局部变量。
9. 函数返回值可以作为另一个函数的参数。
10. 二维数组可以传递给函数，通过嵌套循环遍历。
11. sum用于累加，count用于计数。
12. if判断成立时才执行对应代码块。

## 六、Day 8 核心知识总总结

函数基础：定义函数 → 调用函数 → 传递参数 → 执行函数体 → return返回结果。

变量知识：全局变量、局部变量、形参、实参、值传递。

流程控制：if判断、return结束函数。

综合应用：函数 + 二维数组 + 嵌套循环 + sum累加 + count统计。

**Day 8 学习完成！**