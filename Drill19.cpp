#include "std_lib_facilities.h"

template<typename T> 
struct S
{
private:
	T val;

public:
	S(T initialVal = 0)
	{
		val = initialVal;
	}

	void print()
	{
		cout << val << endl;
	}

	//prototype for normal get
	T& get();

	//prototype for constant get
	const T& get() const;

	void set(T value)
	{
		val = value;
	}

	//to use assing operator for objects to set its values
	S<T>::operator=(const T& s)
	{
		val = s;
		return *this;
	}



};

//implementation of get
template<typename T>
T& S<T>::get()
{
	return val;
}

//implementation of constant get
template<typename T>
const T& S<T>::get() const
{
	return val;
}

template<typename T>
void read_val(T& v)
{
	cin >> v;

}

template<typename T>
istream& operator>>(istream& is, vector<T> vec)
{
	T val;
	while (val != "quit")
	{
		is >> val;
		vec.push_back(val);
	}
	return is;
}

template<typename T>
ostream& operator<<(ostream& os, vector<T> vec)
{
	os << "[";
	for (int i = 0; i < vec.size(); i++)
	{
		os << vec[i] << " ";
	}
	os << "]";

	return os;
}

int main()
{

}
