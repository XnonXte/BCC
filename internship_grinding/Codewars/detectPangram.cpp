#include <string>
#include <vector>

using namespace std;

bool is_pangram(const std::string& s) {
  vector<char> v;
  
  for (auto c : s) {
    if ((int) toupper(c) >= 65 && (int) toupper(c) <= 90) {
      if (count(v.begin(), v.end(), toupper(c)) == 0) {
        v.push_back(toupper(c));
      }
    }
  }
  
  return v.size() == 26;
}
