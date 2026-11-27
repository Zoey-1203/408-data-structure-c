
# Day 10｜C++ 结构体基础与应用

> 学习主题：`struct`、成员访问、结构体初始化、结构体数组、结构体函数传参  
> 练习范围：Practice61～Practice65

## ① 结构体是什么？

结构体可以把多个相关变量组合成一个整体。

```cpp
struct Student {
    int id;
    int score;
};
```

- `Student`：结构体类型名。
- `id`、`score`：成员。
- `int`：成员的数据类型。
- `};`：结构体定义结束，分号不能漏。

## ② 定义变量与访问成员

```cpp
Student s1, s2;

s1.id = 1001;
s1.score = 80;

s2.id = 1002;
s2.score = 90;
```

**知识卡片**

| 写法 | 含义 |
|---|---|
| `Student s1;` | 定义一个 Student 变量 |
| `s1.id` | 访问 s1 的学号成员 |
| `s1.score` | 访问 s1 的成绩成员 |
| `s1.score = 90;` | 修改 s1 的成绩 |

结构体变量彼此独立，修改 `s1.score` 不会自动修改 `s2.score`。

## ③ 结构体初始化

```cpp
struct Student {
    int id;
    int score;
    int age;
};

Student s1 = {1001, 80, 10};
Student s2 = {1002, 90};
Student s3{1003, 75, 20};
```

成员按定义顺序接收初始值：

- `s1`：`id=1001`、`score=80`、`age=10`。
- `s2`：`id=1002`、`score=90`、`age=0`。
- `s3`：`id=1003`、`score=75`、`age=20`。

**注意：** 这里是聚合初始化，省略的后续成员会被初始化为零。不要把它和定义后完全不初始化的普通局部变量混为一谈。

## ④ 结构体数组

一个变量表示一个学生；结构体数组可以保存多个学生。

```cpp
Student arr[3] = {
    {1001, 70},
    {1002, 80},
    {1003, 90}
};

for (int i = 0; i < 3; i++) {
    arr[i].score = arr[i].score + 10;
    cout << arr[i].id << " " << arr[i].score << endl;
}
```

运行结果：

```text
1001 80
1002 90
1003 100
```

**执行顺序：** `i` 依次为 `0、1、2`；每轮先找到 `arr[i]`，再修改该学生的 `score`，最后输出学号和成绩。

## ⑤ 结构体作为函数参数：值传递

```cpp
void addScore(Student s) {
    s.score = s.score + 20;
    cout << "函数内部成绩 = " << s.score << endl;
}

int main() {
    Student s1 = {1001, 70};
    addScore(s1);
    cout << "main中的成绩 = " << s1.score << endl;
}
```

输出：

```text
函数内部成绩 = 90
main中的成绩 = 70
```

**关键：** `Student s` 接收的是一份结构体副本。函数修改副本，不会直接修改 `main` 中的 `s1`。

## ⑥ 结构体指针作为函数参数

```cpp
void addScore(Student* p) {
    p->score = p->score + 10;
}

int main() {
    Student arr[3] = {
        {1001, 70},
        {1002, 80},
        {1003, 90}
    };

    for (int i = 0; i < 3; i++) {
        addScore(&arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        cout << arr[i].id << " " << arr[i].score << endl;
    }
}
```

输出：

```text
1001 80
1002 90
1003 100
```

**知识卡片**

| 写法 | 含义 |
|---|---|
| `Student* p` | 定义一个指向 Student 的指针 |
| `&arr[i]` | 取得第 i 个结构体元素的地址 |
| `p->score` | 通过结构体指针访问 score |
| `p->score += 10` | 修改指针所指学生的成绩 |

`p->score` 等价于 `(*p).score`。

**核心区别：**

- `addScore(Student s)`：传入结构体副本，修改副本。
- `addScore(Student* p)`：传入结构体地址，通过指针修改原结构体。

---

## Practice61～Practice65 练习卡片

| 文件 | 核心内容 | 关键结论 |
|---|---|---|
| `practice61.cpp` | 定义 Student，分别设置两个学生的成员 | 用 `变量名.成员名` 访问和修改成员 |
| `practice62.cpp` | 结构体多成员初始化 | 按成员顺序初始化；省略的尾部成员为 0 |
| `practice63.cpp` | 结构体数组与 `for` 循环 | 用 `arr[i].成员` 逐个处理学生 |
| `practice64.cpp` | 结构体变量作为函数参数 | 值传递，函数内修改不影响原变量 |
| `practice65.cpp` | 结构体指针作为函数参数 | 通过 `p->成员` 可以修改原结构体 |

## 高频易错点

| 易错写法 / 概念 | 正确理解 |
|---|---|
| `s1.score` | 通过结构体变量访问成员，用点号 `.` |
| `p->score` | 通过结构体指针访问成员，用箭头 `->` |
| `addScore(s1)` | 传结构体变量，函数形参得到副本 |
| `addScore(&s1)` | 传结构体地址，函数形参应是 `Student*` |
| `p->score += 10` | 修改原结构体的成绩成员 |
| `arr[i].score` | 访问数组中第 i 个学生的成绩 |

## 一句话复盘

**结构体把多个成员组合成一个整体；`.` 访问结构体变量的成员，`->` 访问结构体指针指向的成员；值传递修改副本，指针传参可以修改原结构体。**

---


