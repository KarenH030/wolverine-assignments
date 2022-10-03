#include<iostream>
#include<string>

size_t lastIndexOF(const std::string&, const std::string&);
void upper_to_lower(std::string&);
void memset(void*, char, size_t);
void memcpy(void*, void*, size_t);

int main() {

    std::string str = {"hello, i said hello"};
    std::string tmp = {"hell"};
    std::cout << lastIndexOF(str,tmp);
    std::cout << "hello";
}


void memcpy(void* dest, void* src, size_t count) {

    size_t n;
    for (n = count; 0 < count; --count) {
        *(char*)dest = *(char*)src;
        ++dest;


}

void memset(void* str, char ch, size_t count) {
    *(char*)str;
        for( ; count > 0; --count) {
            *(char*)str = ch;
            str;
        }

}

void upper_to_lower(std::string& str) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}


size_t lastIndexOF(const std::string& str, const std::string& tmp) {

    size_t index = -1;
    for (int i = 0; i < str.length() - tmp.length(); ++i) {
        if (str[i] == tmp[0]) {
            for (int n = 1 ;n < tmp.length(); ++n) {
                if (str[i + n] != tmp[n]) {
                    break;
                }
                else {
                    index = i;
                }
            }
            

        }
    }
    if (index >= 0) {
        return index;
    }
    return std::string::npos;
}

