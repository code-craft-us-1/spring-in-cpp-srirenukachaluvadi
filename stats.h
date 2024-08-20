#include <vector>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct Stats{
	float average=0.0f;
	float max=0.0f;
	float min=0.0f;
	};
    Stats ComputeStatistics(const std::vector<float>& );
	
}
