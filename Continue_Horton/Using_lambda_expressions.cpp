//Ex10_14.cpp Using lambda expressions
#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

//template function for return middle value elements in vector
template <class T> T average(const vecotr<T>& vec) {
	T sum(0);
	for each (vec.begin(), vec.end(), [&sum](const T& value) {sum += value; });
	return sum / vec.size();
}

//template function for instail values in vector from begin to end
template<class T> voir setValues(vector<T>& vec, T start, T increment) {
	T current(star);
	generate(vec.begin(), vec.end(0, [increment, &current]() -> T {T result(current);
																	current += increment;
																	return result; });
}

//template function for set in vector random values
//from max to min
template<class T> void randomValues(vector<T>& vec, T min, T max) {
	
}