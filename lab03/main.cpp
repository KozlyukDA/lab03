#include "svg.h"
#include "hist.h"
#include <iostream>
#include <vector>
using namespace std;
vector<double>
input_numbers(size_t count)
{
    vector <double> result(count);
    char answer;
	cerr<<"Fill array with random numbers?";
	cin>>answer;
	if ( answer == 'Y'|'y')
        for (size_t i=0;i< count; i++) {
            size_t sum_rand;
            for (size_t j=0;j<12;j++)
                sum_rand += rand();
           result[i] = sum_rand;
        }
     else {
        cerr << "Enter massiv number: \n";
	    for (size_t i = 0; i < count; i++)
		cin >> result[i];
     }
    return result;
}


int main()
{
    // Ввод данных
    srand(42);
    size_t number_count;
    cerr << "Enter number count: ";
    cin >> number_count;
    cerr << "Enter numbers: ";
    const auto numbers = input_numbers(number_count);
    size_t bin_count;
    cerr << "Enter column count: ";
    cin >> bin_count;
    // Обработка данных
    const vector<size_t> bins = make_histogram(numbers, bin_count);
    // Вывод данных
    show_histogram_svg(bins);
    //show_histogram_svg(bins);
}
