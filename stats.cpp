#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<___>& a) {
    //Implement statistics here
	Stats k;
	k.average=accumulate( a.begin(), a.end(), 0.0 )/a.size();
	k.max=*std::max_element(a.begin(), a.end());
	k.min=*std::min_element(a.begin(), a.end());
	return k;
}
