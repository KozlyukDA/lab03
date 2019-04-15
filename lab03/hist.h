#ifndef HIST_H_INCLUDED
#define HIST_H_INCLUDED
#include <vector>
using namespace std;
void find_minmax(vector<double> numbers, double& min, double& max);
vector <size_t> make_histogram(vector<double> numbers, size_t bin_count);
int show_histogram_text(vector<size_t> bins);
#endif // HIST_H_INCLUDED
