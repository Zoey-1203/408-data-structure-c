# Day 6 学习笔记：循环结构与嵌套循环

> 学习目标：掌握 `while`、`do-while`、`for` 三种循环，理解 `break` 和 `continue` 的区别，并能使用嵌套循环完成图形输出、乘法表和简单综合计算。
>
> 本笔记根据 Day 6 学习过程整理。示例用于归纳知识点；未保留完整题干的复习题不补写具体题目。

---

## 一、知识点①：while 循环

### 核心要点
- `while` 先判断条件，条件为真时执行循环体。
- 条件一开始为假，循环体执行 0 次。
- 循环体内通常需要更新循环变量，否则可能出现死循环。

### 基本格式

```cpp
while (循环条件) {
    // 循环体
    // 更新循环变量
}
```

### 示例：输出 1 到 n

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        cout << i << endl;
        i++;
    }

    return 0;
}
```

输入 `5`，输出 `1 2 3 4 5`（每个数字单独一行）。

---

## 二、知识点②：do-while 循环

### 核心要点
- `do-while` 先执行循环体，再判断条件。
- 循环体至少执行一次。
- 末尾的 `while (条件)` 后面必须有分号。

### 基本格式

```cpp
do {
    // 循环体
} while (循环条件);
```

### 示例：输出 1 到 n

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    do {
        cout << i << endl;
        i++;
    } while (i <= n);

    return 0;
}
```

### 与 while 的区别

| 对比 | while | do-while |
|---|---|---|
| 判断时机 | 先判断，再执行 | 先执行，再判断 |
| 最少执行次数 | 0 次 | 1 次 |

---

## 三、知识点③：for 循环

### 核心要点
`for` 循环适合循环次数比较明确的场景。

```cpp
for (初始化; 循环条件; 更新表达式) {
    // 循环体
}
```

- 初始化：设置循环变量初值，只执行一次。
- 条件：成立时执行循环体。
- 更新：每轮循环体结束后更新循环变量。

### 示例：输出 1 到 n

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }

    return 0;
}
```

例如 `for (int i = 1; i <= 3; i++)`，循环变量依次为 1、2、3。

---

## 四、知识点④：break 语句

### 核心要点
- `break` 立即结束它所在的那一层循环。
- 在嵌套循环中，`break` 默认只结束当前所在的内层循环，不会自动结束外层循环。

### 示例：遇到 6 就停止

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;
        }
        cout << i << endl;
    }

    return 0;
}
```

输出：

```text
1
2
3
4
5
```

记忆：`break` = 结束当前所在的循环。

---

## 五、知识点⑤：continue 语句

### 核心要点
- `continue` 不会结束整个循环。
- 它跳过当前这一轮剩余的语句，进入下一轮。
- 在 `for` 循环中，执行 `continue` 后仍会执行更新表达式，再判断条件。

### 示例：跳过偶数，只输出奇数

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
```

输入 `10`，输出 `1、3、5、7、9`。

记忆：`continue` = 跳过本轮，继续下一轮。

---

## 六、知识点⑥：循环嵌套

### 核心要点
- 循环嵌套是在一个循环内部再写一个循环。
- 外层循环通常控制行数或整体重复次数。
- 外层每执行一轮，内层循环通常从头到尾执行一遍。

### 示例：输出 3 行、每行 4 个星号

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 4; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
```

输出：

```text
* * * *
* * * *
* * * *
```

内层循环体总执行次数为 `3 × 4 = 12` 次。

---

## 七、知识点⑦：循环嵌套输出三角形

### 核心要点
- 外层循环控制行数。
- 内层循环控制当前行的星号数量。
- 第 `i` 行输出 `i` 个星号。
- 内层循环结束后换行。

### 示例

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
```

输入 `5`，输出：

```text
*
* *
* * *
* * * *
* * * * *
```

---

## 八、知识点⑧：循环嵌套输出乘法表

### 核心要点
- 外层循环控制行。
- 内层循环控制每行的乘法项。
- 使用 `j <= i`，可以输出逐行递增的乘法表。

### 示例

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << "*" << j << "=" << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}
```

输入 `4`，输出：

```text
1*1=1
2*1=2 2*2=4
3*1=3 3*2=6 3*3=9
4*1=4 4*2=8 4*3=12 4*4=16
```

---

## 九、知识点⑨：嵌套循环中的 break

### 核心要点
如果 `break` 写在内层循环中：
- 内层循环立即结束。
- 外层循环不会因此结束。
- 外层进入下一轮时，内层循环可以重新开始。

### 示例：当 j == 4 时结束内层循环

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 4) {
                break;
            }
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}
```

输出：

```text
1 2 3
2 4 6
3 6 9
```

---

## 十、break 与 continue 的区别

| 对比 | break | continue |
|---|---|---|
| 作用 | 结束当前所在循环 | 跳过当前这一轮 |
| 后续循环 | 当前循环不再继续 | 继续下一轮 |
| 嵌套循环 | 只结束当前所在的那层循环 | 只跳过当前所在循环的这一轮 |

记忆口诀：
- `break`：退出当前循环。
- `continue`：跳过本轮，继续下一轮。

---

## 十一、Day 6 编程练习记录

| 文件 | 练习内容 | 核心知识点 |
|---|---|---|
| `practice24.cpp` | 输入 n，使用 while 输出 1 到 n | while、循环变量更新 |
| `practice25.cpp` | 输入 n，使用 do-while 输出 1 到 n | do-while 至少执行一次 |
| `practice26.cpp` | 输入 n，使用 for 输出 1 到 n | for 循环 |
| `practice27.cpp` | 循环遇到指定值时提前停止 | break |
| `practice28.cpp` | 跳过偶数，输出奇数 | continue、取模 |
| `practice29.cpp` | 输出 3 行、每行 4 个星号 | 循环嵌套 |
| `practice30.cpp` | 输出递增三角形 | 嵌套循环、图形输出 |
| `practice31.cpp` | 输出逐行递增的乘法表 | 嵌套循环、乘法表达式 |
| `practice32.cpp` | 内层循环遇到 `j == 4` 时 break | 嵌套循环中的 break |
| `practice33.cpp` | 综合使用 continue、break、嵌套循环和累加 | 循环综合应用 |

### Practice33：Day 6 最终综合编程练习

**题目要求**
1. 输入正整数 `n`。
2. 外层循环从 1 执行到 n。
3. 内层循环从 1 执行到 5。
4. `j` 是偶数时，使用 `continue` 跳过。
5. `j == 5` 时，使用 `break` 结束内层循环。
6. 输出 `i * j`，并将结果累加到 `sum`。
7. 循环结束后输出 `sum`。

**完整代码**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j % 2 == 0) {
                continue;
            }

            if (j == 5) {
                break;
            }

            cout << i * j << " ";
            sum += i * j;
        }
        cout << endl;
    }

    cout << "sum= " << sum << endl;

    return 0;
}
```

输入：

```text
3
```

实际运行输出：

```text
1 3
2 6
3 9
sum= 24
```

**计算过程：**
- `i = 1`：累加 `1 + 3 = 4`。
- `i = 2`：累加 `2 + 6 = 8`。
- `i = 3`：累加 `3 + 9 = 12`。

因此：

\[
sum = 4 + 8 + 12 = 24
\]

`practice33.cpp` 已经在 VS Code 中运行验证通过。

---

## 十二、Day 6 综合复习

Day 6 完成了 6 道综合复习题，练习了循环结构、嵌套循环、累加以及 `break`、`continue` 的组合应用。

当前学习记录中能够还原完整题干的部分如下。

### 综合复习④：嵌套循环 + break + 累加

```cpp
int sum = 0;

for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 4; j++) {
        if (j == 3) {
            break;
        }
        sum += i + j;
    }
}

cout << sum << endl;
```

每轮内层循环只在 `j = 1、2` 时累加：

\[
(2+3)+(3+4)+(4+5)=21
\]

正确结果：`21`。这题最重要的是理解 `break` 只结束内层循环，外层仍会继续。

### 综合复习⑤：嵌套循环 + continue + 累加

```cpp
int sum = 0;

for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        if (i == j) {
            continue;
        }
        sum += i + j;
    }
}

cout << sum << endl;
```

当 `i == j` 时跳过累加，其余六组数据参与计算：

\[
3+4+3+5+4+5=24
\]

正确结果：`24`。已答对。

### 综合复习⑥：break + continue + 嵌套循环

```cpp
int sum = 0;

for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 4; j++) {
        if (j == 2) {
            continue;
        }

        if (j == 4) {
            break;
        }

        sum += i * j;
    }
}

cout << sum << endl;
```

每轮只累加 `j = 1` 和 `j = 3`：

\[
(1\times1+1\times3)+(2\times1+2\times3)+(3\times1+3\times3)=24
\]

正确结果：`24`。已答对。

> 综合复习①—③：学习过程中已完成，但当前可见记录没有保留完整题干和选项，因此不补写具体题目或答案。

---

## 十三、Day 6 自查清单

- [ ] 我能区分 `while` 和 `do-while`。
- [ ] 我能写出标准的 `for` 循环。
- [ ] 我知道如何避免死循环。
- [ ] 我理解 `break` 的作用。
- [ ] 我理解 `continue` 的作用。
- [ ] 我能解释 `break` 和 `continue` 的区别。
- [ ] 我能使用双层循环输出矩形。
- [ ] 我能使用双层循环输出三角形。
- [ ] 我能使用双层循环输出乘法表。
- [ ] 我知道嵌套循环中的 `break` 只结束当前所在的那层循环。
- [ ] 我能综合使用循环、条件判断、`break`、`continue` 和累加变量。

**Day 6 学习完成。**

下一阶段：Day 7。进入新内容前，可以先复习本篇中的循环执行顺序、`break` 与 `continue`，以及嵌套循环的行列关系。