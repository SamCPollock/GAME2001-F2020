// "Generic" classes of functions.
// Compare 2 numbers, return smallest. Return largest. 

#include <iostream>
using namespace std;

// Check 2 "things" return the smallest
template <class T>
T min_funct  (T lVal, T rVal)
	{
	if (lVal > rVal)
	{
		return rVal;
	}
	return lVal;
}

// Check 2 things, return the largest 

template <class T>
T max_funct(T lVal, T rVal)
{
	if (lVal < rVal)
	{
		return rVal;
	}
	return lVal;
}

// Implement a template class here 
template <class T>
class TemplateClass
{
public:
	TemplateClass(T val)
	{
		m_val = val;
	}
	bool operator<(TemplateClass& rVal)
	{
		return m_val < rVal.GetVal();
	}
	bool operator>(TemplateClass& rVal)
	{
		return m_val > rVal.GetVal();
	}
	T GetVal()
	{
		return m_val;
	}
private:
	T m_val;

};

// Main

int main()
{
	cout << "Template Example \n\n";
	cout << "Min = " << min_funct(30, 26) << endl;
	cout << "Max = " << max_funct(40.1, 41.5) << endl;

	// Create 2 "Template Class" objects and compare them.
	cout << "Max (objects) = " << max_funct(TemplateClass<int>(7), TemplateClass<int>(4)).GetVal();
	return 0;
}