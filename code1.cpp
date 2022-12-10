

#include <iostream>
#include <vector>
using namespace std;

void findMinAndMax(vector<int> const &nums, int &min, int &max)
{
	max = nums[0], min = nums[0];

	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] > max) {
			max = nums[i];
		}

		else if (nums[i] < min) {
			min = nums[i];
		}
	}
}

int main()
{
	vector<int> nums = { 5, 23,6,8,12};
	int min, max;

	findMinAndMax(nums, min, max);

	cout << "The minimum array element is " << min << endl;
	cout << "The maximum array element is " << max << endl;

	return 0;
}
