#include<iostream>
#include<vector>
#include "1.h"


using namespace std;

int main(void)
{
	string str = "10005+34-43+9+6-6";
	std::vector<int> numbers; //数字集合
	std::vector<int> symbols;//符号
	MyClass myClass;
	
	bool ret = myClass.SelectDatas(str,numbers,symbols);
	//总分
	int sum = myClass.Calculate(numbers,symbols);
	
	cout<<sum<<endl;
	cin.get();
	return 0;
}

bool MyClass::SelectDatas(string& str,std::vector<int>& numbers,std::vector<int>& symbols)
{
	std::vector<int> realNumber;//真实数字集合
	int counts = 0;//位数
	int mul_a = 0;//倍数
	int tempNumber = 0;
	int i=0;

	while(1)
	{
		if (str[i] =='\0')
		{
			break;
		}else if ((str[i]>=48)&&(str[i]<=57))
		{
			realNumber.push_back(str[i]-48);
			++counts;
			++i;
		} 
		if((str[i] == '+') || (str[i] == '-')||(realNumber.size() == str.size()))
		{
			for (int j=0 ; j< i ; ++j)
			{
				mul_a =GetMul(counts);
				tempNumber += mul_a*realNumber[j];
				--counts;
			}
			numbers.push_back(tempNumber);
			if (realNumber.size() != str.size())
			{
				symbols.push_back(str[i]);
			}
			//删除清空
			str.replace(0,i+1,"");
			realNumber.clear();
			tempNumber = 0;
			i=0;
			counts = 0;
		}
	}

	return true;
}

//算分
int MyClass::Calculate(std::vector<int> numbers,std::vector<int> symbols)
{
	int sum = numbers[0];
	for (int i=0 ; i<symbols.size() ; ++i)
	{
		if (symbols[i] == '+')
		{
			sum += numbers[i+1];
		}else if (symbols[i] == '-')
		{
			sum -= numbers[i+1];
		}
	}
	return sum;
}
//获取倍数
int MyClass::GetMul(int counts)
{
	int mul_a = 1;
	if (counts == 1)
	{
		mul_a =1;
	}else if (counts > 1)
	{
		mul_a = pow(10,counts-1);
	}

	return mul_a;
}
