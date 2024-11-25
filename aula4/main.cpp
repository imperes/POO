#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char* text = "Wellcome, Gabriel Peres";

int main()
{
    vector<char> vec;

    char* ptr = text;

    while(*ptr != '\0'){
        vec.push_back(*ptr);
        ptr++;
    }

    for(auto a : vec){
        cout << a;
    }
    cout << endl;

    cout << "Lista de inteiros" << endl;
    for(auto a : { 1, 3, 5, 9 }){
        cout << a << " , ";
    }
    cout << endl;

    sort(vec.begin(), vec.end());
    for (auto c: vec){
        cout << c;
    }
    cout << endl;

    return 0;
}
