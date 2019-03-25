C：

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
