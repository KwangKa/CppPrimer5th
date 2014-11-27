#include <iostream>
#include <string>
#include <vector>

int sumIntVS(std::vector<std::string>&);
float sumFloatVS(std::vector<std::string>&);

int main() {
    std::vector<std::string> vs = {"20.5", "19", "88", "20", "46"};
    for (auto it = vs.cbegin(); it != vs.cend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << sumIntVS(vs) << std::endl;
    std::cout << sumFloatVS(vs) << std::endl;
    return 0;
}

int sumIntVS(std::vector<std::string> &vs) {
    int ret = 0;
    for (auto it = vs.cbegin(); it != vs.cend(); ++it)
        ret += stoi(*it);
    return ret;
}

float sumFloatVS(std::vector<std::string>& vs) {
    float ret = 0.0;
    for (auto it = vs.cbegin(); it != vs.cend(); ++it)
        ret += stof(*it);
    return ret;
}
