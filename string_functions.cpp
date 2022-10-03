#include<iostream>
#include<cstring>
#include<vector>

void rtrim(std::string&);
void ltrim(std::string&);
void trim(std::string&);
void toUpperCase(std::string&);
void toLowerCase(std::string&);
void replaceAll(std::string&,std::string&,std::string&);
bool startsWith(std::string&,std::string&);
bool endsWith(std::string&,std::string&);
bool is_symbol(const char);
std::vector<std::string> split(std::string&, const std::string&);

int main() {

    

}

void replaceAll(std::string& str, std::string& substr, std::string& substr2) {

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == substr[0]) {
            bool check = true;
            for (int j = 1; j < substr.length(); ++j) {
                if (str[i + j] != substr[j]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                str.erase(i,substr.length());
                str.insert(i,substr2);
                i += substr2.length() - substr.length();
            }
        }
    }
    return;
}

bool endsWith(std::string& str, std::string& substr) {

    for (int i = 0; i < substr.length(); ++i) {
        if (str[str.length() - i] != substr[substr.length() - i]) {
            return false;
        }
    }
    return true;
}

bool startsWith(std::string& str, std::string& substr) {
    
    for (int i = 0; i < substr.length(); ++i) {
        if (str[i] != substr[i]) {
            return false;
        }
    }
    return true;

}

void toLowerCase(std::string& str) {
   
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return;
}

void toUpperCase(std::string& str) {

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] <= 'z' && str[i] >= 'a') {
            str[i] -= 32;
        }
    }
    return;
}

void rtrim(std::string& str) {
	int count = 0;
	for (int i = str.length() - 1; i >= 0; --i) {
		if (str[i] == ' ') {
			++count;
		} else {
			break;
		}
	}	
	int tmp = str.length() - count;
	str.erase(tmp, count);
}

bool is_symbol(const char ch) {
	return ((ch <= 'z' && ch >= 'a') || (ch >= 'A' && ch <= 'Z'));
}

void ltrim(std::string& str) {
    int i = 0;  
    while (!is_symbol(str[i]) and str[i] == ' ') {
        str.erase(str.begin() + i);
    }
}


void trim(std::string& str) {
    int i = 0;
    while (str[i] == ' ') {
        str.erase(str.begin() + i);
    }
    int count = 0;
    for (int i = str.length() - 1; i >= 0; --i) {
        if (str[i] == ' ') {
            ++count;
        } else {
            break;
        }
    }
    int size = str.length() - count;
    str.erase(size, count);
}


std::vector<std::string> split(const std::string& str, const std::string& delimiter) {
    std::vector<std::string> res;
    std::string token{};
    int i = 0;
    bool flag = false;
    while (i <= str.length()) {
        if (delimiter.find(str[i]) != -1) {
            ++i;
            flag = true;
        }
        if (flag) {
            res.push_back(token);
            token.clear();
            flag = false;
        }
        token += str[i];
        ++i;
    }
    res.push_back(token);
    return res;
}
       
