#include <iostream>
#include <vector>
#include <numeric>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

void backjoon() {
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int &i : nums) {
        cin >> i;
    }

    // 1 : 산술평균 (반올림)
    int mean = round((double)accumulate(nums.begin(), nums.end(), 0) / N);
    cout << mean << "\n";

    // 2 : 중앙값
    sort(nums.begin(), nums.end());
    cout << nums[N / 2] << "\n";

    // 3 : 최빈값
    map<int, int> m;
    for (int i : nums) {
        m[i]++;
    }

    vector<pair<int, int>> freq(m.begin(), m.end());
    sort(freq.begin(), freq.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    });

    if (freq.size() == 1 || freq[0].second != freq[1].second) {
        cout << freq[0].first << "\n";
    } else {
        cout << freq[1].first << "\n";
    }

    // 4 : 범위 계산
    int maxVal = *max_element(nums.begin(), nums.end());
    int minVal = *min_element(nums.begin(), nums.end());
    cout << (maxVal - minVal) << "\n";
}

int main() {
    backjoon();
    return 0;
}
