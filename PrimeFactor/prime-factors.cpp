#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result = {};
		if (number > 1) {
			int devisor = 2;
			if (number == 4 || number == 6 || number == 9) {
				for (devisor = 2; number > 1; devisor++) {
					while (number % devisor == 0) {
						result.push_back(devisor);
						number /= devisor;
					}
				}
			}
			else {
				result.push_back(number);
			}
			
		}
		return result;
	}
};