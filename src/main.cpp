#include <iostream>
#include <vector>
#include <string>
#include <nlohmann/json.hpp>
#include <algorithm>

int main(int argc, char* argv[]) {
	std::vector<std::string> packages1 = GetBinaryPackages("branch1");
	std::vector<std::string> packages2 = GetBinaryPackages("branch2");

	std::vector<std::string> difference1 = GetPackagesDifference(packages1, packages2);

	std::vector<std::string> difference2 = GetPackagesDifference(packages2, packages1);

		nlohmann::json result1 = {
			{"packages_in_file1_but_not_in_file2", difference1}
			};

		nlohmann::json result2 = {
			{"packages_in_file2_but_not_in_file1", difference2}
			};

return 0;
} 
