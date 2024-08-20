#include "stats.h"
#include <numeric>

 Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& a) {
    //Implement statistics here
	Statistics::Stats k;
	k.average=std::accumulate( a.begin(), a.end(), 0.0 )/a.size();
	k.max=*std::max_element(a.begin(), a.end());
	k.min=*std::min_element(a.begin(), a.end());
	return k;
}
