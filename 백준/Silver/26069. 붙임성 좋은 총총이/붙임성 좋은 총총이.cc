#include <iostream>
#include <set>

using namespace std;

void backjoon() {
    set<string> s;
    string s1, s2;
    int N;

    cin >> N;

    s.insert("ChongChong"); // 시작 인물 "ChongChong"을 미리 추가

    while (N--) {
        cin >> s1 >> s2;

        // s1 또는 s2 중 하나라도 "춤을 추는 사람 목록(s)"에 있다면, 둘 다 감염
        if (s.count(s1) || s.count(s2)) {
            s.insert(s1);
            s.insert(s2);
        }
    }

    cout << s.size(); // 전체 "춤을 추는 사람"의 수 출력
}

int main() {
    backjoon();
    return 0;
}
