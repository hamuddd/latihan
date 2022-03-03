#include<iostream>

std::string reverse_str(const std::string &str)
{
  int panjang;
  std::string s3;
  panjang = str.length();
  char nilai[panjang-1];
  for(int a = panjang - 1 ; a >=0 ; a--){
    nilai[panjang - a - 1] = str[a];
  }
  return nilai;
}

int main()
{
    std::string s1 = "1234";
    std::string s2 = reverse_str(s1);  
    std::cout << s2; 
}

