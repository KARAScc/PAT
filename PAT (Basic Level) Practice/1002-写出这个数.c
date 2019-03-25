/*
  2019/3/22 KARAS 
  Question:
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10​100​​。
输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。
  Input:
  1234567890987654321123456789
  Output:
  yi san wu
*/
#include<stdio.h>
#include<string.h>

int main()
{
  char num[101];    // 输入的数
  int result[3];    // 数的和
  char py[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  // 对应的拼音
  
  gets(num);    // 获取输入的数
  
  int sum = 0,i,j = 0;    // 定义和
  
  // 计算出数的和
  for(i = 0;i < strlen(num); i++)
  {
    sum+=num[i]-'0';
  }
  
  // 分解和
  while(sum)
  {
    result[j++] = sum%10;
    sum/=10;
  }
  
  // 输出拼音
  for(i = j-1; i > 0; i--)
  {
    printf("%s ",py[result[i]]);
  }
  printf("%s",py[result[0]]);
  
  return 0;  
}
