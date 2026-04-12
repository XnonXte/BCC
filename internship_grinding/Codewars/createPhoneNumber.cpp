#include <string>
#include <fmt/core.h>
#include <vector>

using namespace std;

std::string createPhoneNumber(const int arr [10]){
  std::string st(10, '0');
    
  for (int i = 0; i < 10; i++) {
    st[i] = arr[i] + '0';
  }
  
  return fmt::format("({}) {}-{}", st.substr(0, 3), st.substr(3, 3), st.substr(6));
}