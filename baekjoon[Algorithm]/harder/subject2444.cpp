// 문제
// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

// 입력
// 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

// 출력
// 첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 0;
    string star = "*";

    cin >> num;

    int j = num - 1;
    int count = 1;

    if(num >= 1 && num <= 100){
        num = num * 2 - 1;

        for(int i = 1; i <= num; i++){
            cout << string(j, ' ') << string(count, '*') << endl; //string을 바로 횟수만큼 쉽게 출력가능 최고!

            if(i >= num / 2 + 1){
             j++;
             count -=2;   
            }else{
            j--;
            count += 2;
            }
        }

        return 0;
    }
}
