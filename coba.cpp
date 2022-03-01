#include<iostream>

std::string reverse_str(const std::string &str)
{
  int panjang,panjang2;
  char temp;
  std::string s3 = str;
  panjang = str.length() - 1;
  panjang2 = panjang/2 +1;
  for(int a = 0 ; a < panjang2 ; a++){
    temp = s3[a];
    s3[a] = s3[panjang - a];
    s3[panjang - a] = temp;
  }
  return s3;
}

int main()
{
    std::string s1 = "4321";
    std::string s2 = reverse_str(s1);  
    std::cout << s2;
    std::cout << s1;
}