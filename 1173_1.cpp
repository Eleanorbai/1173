#include<iostream>
using namespace std;
int main ()
{
	//输入字符串，并求其长度
	char a[11];
	int b[11];
	int i,m,k,p,q,w,j,x,y,max,n=0;
	cin>>a;
	for(i=0;i<11;i++)
	{
		if(a[i]!=0)
			n=n+1;
		else 
			break;
	}
	//判断每个字符出现的频率，重复不计
	for(m=0;m<n;m++)
	{
		b[m]=1;
		for(k=m+1;k<=n;k++)
		{
			if(a[m]==a[k])
			    b[m]=b[m]+1;
		}
	}
	b[n]=1;
	//输出频率最高的字符
	 for(j=0;j<=n;j++) 
	 {
		bool flag=1;
		for(p=0;p<=n;p++)
		{
			if(b[j]<b[p])
			{
				flag=0;
			}	
		}
		if(flag)
			cout<<a[j]<<" ";
	 }
	 
	 //输出最大频率
	for(x=0;x<n;x++)
	{
		bool exit=0;
		for(y=x+1;y<=n;y++)
		{
			if(b[x]>=b[y])
			{
				if(y==n);
					cout<<b[x];
					exit=1;
					break;
			}
		}
	if(exit==1)
		break;
	}
return 0;
}