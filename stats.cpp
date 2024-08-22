#include "stats.h"
#include <algorithm>
#include <numeric>
#include <vector>
#include <math.h>


 Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& a) {
    //Implement statistics here
	Statistics::Stats k;
	k.average = static_cast<float>(std::accumulate(a.begin(), a.end(), 0.0) / a.size());

	auto const max = std::max_element(a.begin(), a.end());
	auto const min = std::min_element(a.begin(), a.end());
	if(max==a.end())
	{
		k.max =static_cast<float>(nan("0x12345")) ;
	}
	else
	{
		k.max=*max;
	}
	if(min==a.end())
	{
		k.min = static_cast<float>(nan("0x12345"));
	}
	else
	{
		k.min=*min;
	}
	return k;
}
