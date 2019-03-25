/*
 *2019/3/26	KARAS 1003- 我要通过
 Question: 
    字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
    任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
    如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
Example: 
	8
	PAT
	PAAT
	AAPATAA
	AAPAATAAAA
	xPATx
	PT
	Whatever
	APAAATAA
Answer:
	YES
	YES
	YES
	YES
	NO	
	NO
	NO
	NO
*/

#include<stdio.h>

int main()
{
  int n;	// 输入的个数 
  int i;	// 循环用 
  char c;	// 接受字符 
  
  scanf("%d",&n);	 
  int result[n]; 	// 保存结果 
  while(getchar()!='\n');	// 清空'\n' 
  
  // 循环n个字符串 
  for(i=0;i<n;i++)
  {
  	// pos判断A在P和T的哪个位置 ：0左边，1中间，2右边
	// count计数 
     int pos=0,count[3]={0,0,0};
     
     while((c = getchar())!='\n')
     {
        if(c=='A')
          count[pos]++;
        else if(c=='P'&&pos==0)
          pos=1;
        else if(c=='T'&&pos==1)
          pos=2;
        else
          break;
     }
     
     // 符合要求结果为1，不符合为0 
     if(c=='\n'&&pos==2&&count[1]&&count[2]==count[1]*count[0])
       result[i]=1;
     else
       result[i]=0;
       
       if(c!='\n')
          while(getchar()!='\n');
  }
  
  // 输出结果 
  for(i=0;i<n;i++)
  {
  	if(result[i]==1)
  		puts("YES");
  	else
  		puts("NO");
  }
  
  return 0;
}
