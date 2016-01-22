#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>

using namespace std;
int max_cuts[4001], cuts[3];

int main() {

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
	int n, a, b, c;
	scanf("%d %d %d %d", &n, &cuts[0], &cuts[1], &cuts[2]);
	sort(cuts, cuts + 3);
	for (int i = 0; i <= n; i++) {
		max_cuts[i] = INT_MIN;
	}
	
	max_cuts[0] = 0;
	max_cuts[cuts[0]] = 1;
	max_cuts[cuts[1]] = 1;
	max_cuts[cuts[2]] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 3; j++) {
			if (cuts[j] > i) break;
			max_cuts[i] = max(max_cuts[i - cuts[j]] + 1, max_cuts[i]);
		}
		cout<<max_cuts[i]<<"\n";
	}
	printf("%d\n", max_cuts[n]);
	return 0;
}