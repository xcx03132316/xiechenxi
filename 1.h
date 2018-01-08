#ifndef TEXT_ONE_
#define TEXT_ONE_

#include <string>
class MyClass
{
public:
	MyClass(void)
	{

	}
	~MyClass(void)
	{

	}

	int Calculate(std::vector<int> numbers,std::vector<int> symbols);

	int GetMul(int counts);
	bool SelectDatas(std::string& str,std::vector<int>& numbers,std::vector<int>& symbols);

private:
	

public:
};

class SingleTon
{
public:
	static SingleTon* Getinstance()
	{
		if (m_pInstance == NULL)
		{
			m_pInstance = new SingleTon;
		}
		return m_pInstance;
	}
protected:
private:
	static SingleTon*  m_pInstance;
	SingleTon(){};
};



























#endif
