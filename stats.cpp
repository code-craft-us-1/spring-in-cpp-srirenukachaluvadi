#include "stats.h"
#include <algorithm>
#include <numeric>
#include <vector>

 Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& a) {
    //Implement statistics here
	Statistics::Stats k;
	k.average = std::accumulate(a.begin(), a.end(), 0.0) / a.size();

	auto const max = std::max_element(a.begin(), a.end());
	auto const min = std::min_element(a.begin(), a.end());
	if(max==a.end())
	{
		k.max =nan("0x12345") ;
	}
	if(min==a.end())
	{
		k.min = nan("0x12345");;
	}
		
	return k;
}
