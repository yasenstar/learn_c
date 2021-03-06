// instr3.cpp -- reading more than one word with get() & get()
#include <iostream>
int main() {
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name, ArSize).get();    // read string, newline
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";

    return 0;
}

// getline() 每次读取一行，通过换行符来确定行尾，但不保存换行符，存储时用空字符来替换换行符。