/*
*2019/6/25	KARAS 1004 成绩排名 (20 分)

读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
输入格式：

每个测试输入包含 1 个测试用例，格式为

第 1 行：正整数 n
第 2 行：第 1 个学生的姓名 学号 成绩
第 3 行：第 2 个学生的姓名 学号 成绩
  ... ... ...
第 n+1 行：第 n 个学生的姓名 学号 成绩

其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
输出格式：

对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。
输入样例：

3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95

输出样例：

Mike CS991301
Joe Math990112
*/
#include <stdio.h>
#include <string.h>

int main() {
    char max_name[11], min_name[11], name[11], max_num[11], min_num[11], num[11];//创建姓名和字符串数组 
    int max = -1, min = 101, score = 0, cnt = 0;//初始化分数 和 输入的行数 
    scanf("%d", &cnt);
    for(int i = 0; i < cnt; i++) {
        scanf("%s %s %d", name, num, &score);
        if (score > max) {//如果成绩比最高分高，复制对应的信息 
            strcpy(max_name, name);
            strcpy(max_num, num);
            max = score;
        } 
        if (score < min) {
            strcpy(min_name, name);
            strcpy(min_num, num);
            min = score;
        }
    }
    printf("%s %s\n%s %s\n", max_name, max_num, min_name, min_num);
    return 0;
} 
