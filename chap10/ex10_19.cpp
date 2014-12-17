#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void biggies(std::vector<std::string>&, std::vector<std::string>::size_type);
std::string make_plural(size_t, const std::string&, const std::string&);
void elimDups(std::vector<std::string>&);

int main(int argc, char** argv) {
    std::vector<std::string> words;
    std::string s;
    while (std::cin >> s)
        words.push_back(s);
    for (auto &w : words)
        std::cout << w << " ";
    std::cout << std::endl;
    biggies(words, atoi(argv[1]));

    return 0;
}

std::string make_plural(size_t count, const std::string &word, const std::string &ending) {
    return count > 1? word + ending : word;
}

void elimDups(std::vector<std::string> &words) {
    sort(words.begin(), words.end());
    auto it = unique(words.begin(), words.end());
    words.erase(it, words.end());
}

void biggies(std::vector<std::string> &words, std::vector<std::string>::size_type st) {
    elimDups(words);
    stable_sort(words.begin(), words.end(),
                [](const std::string &a, const std::string &b)
                  { return a.size() < b.size(); });
    auto wc = stable_partition(words.begin(), words.end(),
                               [st](const std::string &a) { return a.size() < st; });

    auto count = words.end() - wc;
    std::cout << count << " " << make_plural(count, "word", "s")
              << " of length " << st << " or longer" << std::endl;
    
    for_each(wc, words.end(), [](const std::string &s) { std::cout << s << " "; });
    std::cout << std::endl;
}                      
