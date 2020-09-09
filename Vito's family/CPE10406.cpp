#include <iostream>
#include <vector>
#include <algorithm> 
#include <Cmath>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;

	int i = 0;
	int rel_num = 0;
	vector<int> street; 
	int temp;
	int dist_sum;

	while (i < test_case) {
		cin >> rel_num;
		for (int j = 0; j < rel_num; j++) {
			cin >> temp;
			street.push_back(temp);
		}
		sort(street.begin(), street.end()); //排序

		int m; //median
		m = ceil(rel_num / 2);  //ceil無條件進位

		dist_sum = 0;
		for (int j = 0; j < rel_num; j++) {
			dist_sum += fabs(street[m] - street[j]);
		}

		cout << dist_sum << endl;

		street.clear(); //用完記得清除
		i++;
	}

	return 0;

}
