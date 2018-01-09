//Ex10_14.cpp Using lambda expressions
#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

//template function for return middle value elements in vector
template <class T> T average(const vector<T>& vec)
{
	T sum(0);
	for_each(vec.begin(), vec.end(),
		[&sum](const T& value) { sum += value; });
	return sum / vec.size();
}

//template function for instail values in vector from begin to end
template<class T> void setValues(vector<T>& vec, T start, T increment) {
	T current(star);
	generate(vec.begin(), vec.end(), [increment, &current]() -> T {T result(current);
																	current += increment;
																	return result; });
}

//template function for set in vector random values
//from max to min
template<class T> void randomValues(vector<T>& vec, T min, T max)
{
	srand(static_cast<unsigned int>(time(0)));   // Initialize random number generator
	generate(vec.begin(), vec.end(),
		[=]() { return static_cast<T>(static_cast<double>(rand()) / RAND_MAX * (max - min) + min); });
}


//template function for cout vestor's values
template<class T> void listVecor(const vector<T>& vec) {
	int count(0);
	for_each(vec.begin(), vec.end(), [&count](const T& n) -> void {
		cout << setw(10) << n;
		if (++count % 5) cout << " ";
		else cout << endl;
	})
}

int main() {
	vector<int> integerData(50);
	randomValues(integerData, 1, 10);
	cout << "Vector includes: " << endl;
	listVecor(integerData);
	cout << "Middle value" << average(integerData) << endl;

	vector<double> realData(50);
	//randomValues(realData, 1, 10);
	cout << "Vector includes: " << endl;
	listVecor(realData);
	cout << "Middle value" << average(realData) << endl;

	system("pause");
	return 0;
}