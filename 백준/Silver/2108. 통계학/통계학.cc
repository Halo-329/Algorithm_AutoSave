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

    // 1. 산술평균 (반올림)
    int mean = round((double)accumulate(nums.begin(), nums.end(), 0) / N);
    cout << mean << "\n";

    // 2. 중앙값
    sort(nums.begin(), nums.end());
    cout << nums[N / 2] << "\n";

    // 3. 최빈값
    map<int, int> m;
    for (int i : nums) {
        m[i]++;
    }

    int maxFreq = 0;
    vector<int> modes;
  
    for (auto &p : m) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            modes = {p.first}; // 새로운 최빈값 발견
        } else if (p.second == maxFreq) {
            modes.push_back(p.first); // 동률인 경우 추가
        }
    }

    sort(modes.begin(), modes.end()); // 정렬 후 두 번째 최빈값 출력
    cout << (modes.size() > 1 ? modes[1] : modes[0]) << "\n";

    // 4. 범위 계산
    cout << (nums.back() - nums.front()) << "\n";
}

int main() {
    backjoon();
    return 0;
}
