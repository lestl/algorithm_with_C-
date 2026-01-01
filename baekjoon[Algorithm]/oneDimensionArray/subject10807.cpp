#include <iostream>

using namespace std;
int main(){
    int init_array_length;
    int out_num;
    int check_num;
    int count = 0;

    cin >> init_array_length;
    if(init_array_length <= 100 && init_array_length >= 1){
        int num_array[init_array_length];

        for(int i = 0; i < init_array_length; i++){
        cin >> out_num;
        num_array[i] = out_num;
    }

    cin >> check_num;

    for(int i = 0; i < init_array_length; i++){
        if(num_array[i] == check_num){
            count++;
        }
    }
    }
    cout << count;

}